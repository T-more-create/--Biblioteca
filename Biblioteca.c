#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
} Livro;

typedef struct Node {
    Livro livro;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct Biblioteca {
    Node* head;
    Node* tail;
} Biblioteca;

Biblioteca* criar_biblioteca() {
    Biblioteca* b = (Biblioteca*)malloc(sizeof(Biblioteca));
    b->head = NULL;
    b->tail = NULL;
    return b;
}

void adicionar_livro(Biblioteca* b, Livro livro) {
    Node* novo = (Node*)malloc(sizeof(Node));
    novo->livro = livro;
    novo->next = NULL;

    if (b->head == NULL) {
        novo->prev = NULL;
        b->head = novo;
        b->tail = novo;
    } else {
        novo->prev = b->tail;
        b->tail->next = novo;
        b->tail = novo;
    }
    printf("Livro '%s' adicionado com sucesso!\n", livro.titulo);
}

void remover_livro(Biblioteca* b, const char* titulo) {
    Node* atual = b->head;
    while (atual != NULL) {
        if (strcmp(atual->livro.titulo, titulo) == 0) {
            if (atual->prev) {
                atual->prev->next = atual->next;
            } else {
                b->head = atual->next;
            }
            if (atual->next) {
                atual->next->prev = atual->prev;
            } else {
                b->tail = atual->prev;
            }
            free(atual);
            printf("Livro '%s' removido com sucesso!\n", titulo);
            return;
        }
        atual = atual->next;
    }
    printf("Livro '%s' não encontrado!\n", titulo);
}

void listar_livros(Biblioteca* b) {
    Node* atual = b->head;
    if (atual == NULL) {
        printf("Não há livros na biblioteca.\n");
        return;
    }
    printf("Livros na biblioteca:\n");
    while (atual != NULL) {
        printf("Título: %s, Autor: %s, Ano: %d\n", atual->livro.titulo, atual->livro.autor, atual->livro.ano);
        atual = atual->next;
    }
}

void liberar_biblioteca(Biblioteca* b) {
    Node* atual = b->head;
    while (atual != NULL) {
        Node* temp = atual;
        atual = atual->next;
        free(temp);
    }
    free(b);
}

int main() {
    Biblioteca* minha_biblioteca = criar_biblioteca();
    int opcao;

    do {
        printf("\nMenu de Gerenciamento da Biblioteca:\n");
        printf("1. Adicionar Livro\n");
        printf("2. Remover Livro\n");
        printf("3. Listar Livros\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
            case 1: {
                Livro livro;
                printf("Digite o título do livro: ");
                fgets(livro.titulo, sizeof(livro.titulo), stdin);
                livro.titulo[strcspn(livro.titulo, "\n")] = 0; 

                printf("Digite o autor do livro: ");
                fgets(livro.autor, sizeof(livro.autor), stdin);
                livro.autor[strcspn(livro.autor, "\n")] = 0;

                printf("Digite o ano de publicação: ");
                scanf("%d", &livro.ano);
                getchar(); 

                adicionar_livro(minha_biblioteca, livro);
                break;
            }
            case 2: {
                char titulo[100];
                printf("Digite o título do livro a ser removido: ");
                fgets(titulo, sizeof(titulo), stdin);
                titulo[strcspn(titulo, "\n")] = 0;

                remover_livro(minha_biblioteca, titulo);
                break;
            }
            case 3:
                listar_livros(minha_biblioteca);
                break;
            case 4:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 4);

    liberar_biblioteca(minha_biblioteca);
    return 0;
}