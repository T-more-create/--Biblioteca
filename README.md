# - 📖 GERENCIAMENTO DE BIBLIOTECA EM C

Este projeto implementa uma biblioteca de livros simples utilizando listas duplamente encadeadas em C. O sistema permite que você adicione, remova e liste livros, além de cuidar automaticamente da gestão de memória.

🛠️ Funcionalidades
Adicionar Livro: Insira um novo livro com título, autor e ano de publicação.
Remover Livro: Remova um livro pelo seu título.
Listar Livros: Exiba todos os livros atualmente cadastrados na biblioteca.
Gerenciamento de Memória: O sistema aloca e libera memória dinamicamente conforme você insere e remove livros.
📋 Como Executar
Clone o repositório:
bash
Copiar código
git clone https://github.com/seu-usuario/biblioteca-c.git
Compile o código:
bash
Copiar código
gcc -o biblioteca biblioteca.c
Execute o programa:
bash
Copiar código
./biblioteca
📚 Estruturas de Dados
Livro: Armazena o título, autor e ano de publicação.
Node: Cada nó contém um livro e ponteiros para o próximo e anterior nó.
Biblioteca: Gerencia a lista de livros com ponteiros para o primeiro e último nós.
💡 Exemplos de Uso
Adicione um livro:

bash
Copiar código
Digite o título do livro: O Senhor dos Anéis
Digite o autor do livro: J.R.R. Tolkien
Digite o ano de publicação: 1954
Liste os livros:

bash
Copiar código
Livros na biblioteca:
Título: O Senhor dos Anéis, Autor: J.R.R. Tolkien, Ano: 1954
Remova um livro:

bash
Copiar código
Digite o título do livro a ser removido: O Senhor dos Anéis
Livro 'O Senhor dos Anéis' removido com sucesso!
🧹 Gestão de Memória
A função liberar_biblioteca() cuida de liberar a memória de todos os livros ao sair do programa.
📂 Estrutura do Projeto
r
Copiar código
biblioteca-c/
│
├── biblioteca.c    # Código-fonte principal
└── README.md       # Este arquivo
🏗️ Contribuição
Fique à vontade para abrir issues ou fazer pull requests para melhorias e correções.

Feito com ❤️ e C!

