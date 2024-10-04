# - 📖 GERENCIAMENTO DE BIBLIOTECA EM C

- Este projeto implementa uma biblioteca de livros simples utilizando listas duplamente encadeadas em C. O sistema permite que você adicione, remova e liste livros, além de cuidar automaticamente da gestão de memória.

# - ⚙ Resumo do Código
- Este código implementa uma biblioteca de livros utilizando uma lista duplamente encadeada em C. Ele permite adicionar, remover e listar livros, além de gerenciar a memória alocada dinamicamente. A estrutura principal é uma biblioteca, que contém uma lista de nós (cada nó representa um livro com título, autor e ano de publicação).

# - Principais Componentes:
1 - Estruturas de Dados:
- Livro: armazena informações do livro (título, autor e ano).
- Node: representa um nó na lista, contendo um livro e ponteiros para o nó anterior e próximo.
- Biblioteca: gerencia o início e fim da lista de nós.
- 
2 - Funções Principais:

- criar_biblioteca: inicializa a biblioteca.
- adicionar_livro: insere um novo livro na biblioteca.
- remover_livro: remove um livro com base no título.
- listar_livros: exibe todos os livros da biblioteca.
- liberar_biblioteca: libera a memória alocada pela biblioteca.
- 
- Menu de Interação:
- O usuário interage com o programa através de um menu que oferece as opções de adicionar, remover, listar livros e sair.

# - 🛠️ Funcionalidades
- Adicionar Livro: Insira um novo livro com título, autor e ano de publicação.
- Remover Livro: Remova um livro pelo seu título.
- Listar Livros: Exiba todos os livros atualmente cadastrados na biblioteca.
- Gerenciamento de Memória: O sistema aloca e libera memória dinamicamente conforme você insere e remove livros.

# - 📋 Como Executar
1 - Clone o repositório:
```bash
git clone https://github.com/seu-usuario/biblioteca-c.git
```

2 - Compile o código:
``` bash
gcc -o biblioteca biblioteca.c
```

3 - Execute o programa:
``` bash
- ./biblioteca
```

# - 📚 Estruturas de Dados
- Livro: Armazena o título, autor e ano de publicação.
- Node: Cada nó contém um livro e ponteiros para o próximo e anterior nó.
- Biblioteca: Gerencia a lista de livros com ponteiros para o primeiro e último nós.

# - 💡 Exemplos de Uso
- Adicione um livro:
``` bash
Digite o título do livro: O Senhor dos Anéis
Digite o autor do livro: J.R.R. Tolkien
Digite o ano de publicação: 1954
```

- Liste os livros:
``` bash
Livros na biblioteca:
Título: O Senhor dos Anéis, Autor: J.R.R. Tolkien, Ano: 1954
```

- Remova um livro:
``` bash
Digite o título do livro a ser removido: O Senhor dos Anéis
Livro 'O Senhor dos Anéis' removido com sucesso!
```

# - 🧹 Gestão de Memória
- A função liberar_biblioteca() cuida de liberar a memória de todos os livros ao sair do programa.

# - 🏗️ Contribuição
- Fique à vontade para abrir issues ou fazer pull requests para melhorias e correções.
- Feito com ❤️ e C!

# - ✍ Finalização:
- Feito pro:
- Taíssa Moreira da Silve
- Maria Carolina de Araújo de Sousa



