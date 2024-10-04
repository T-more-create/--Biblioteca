# - 📖 GERENCIAMENTO DE BIBLIOTECA EM C

- Este projeto implementa uma biblioteca de livros simples utilizando listas duplamente encadeadas em C. O sistema permite que você adicione, remova e liste livros, além de cuidar automaticamente da gestão de memória.

# - 🛠️ Funcionalidades
- Adicionar Livro: Insira um novo livro com título, autor e ano de publicação.
- Remover Livro: Remova um livro pelo seu título.
- Listar Livros: Exiba todos os livros atualmente cadastrados na biblioteca.
- Gerenciamento de Memória: O sistema aloca e libera memória dinamicamente conforme você insere e remove livros.

# - 📋 Como Executar
1 - Clone o repositório:
- git clone https://github.com/seu-usuario/biblioteca-c.git

2 - Compile o código:
- gcc -o biblioteca biblioteca.c

3 - Execute o programa:
- ./biblioteca

# - 📚 Estruturas de Dados
- Livro: Armazena o título, autor e ano de publicação.
- Node: Cada nó contém um livro e ponteiros para o próximo e anterior nó.
- Biblioteca: Gerencia a lista de livros com ponteiros para o primeiro e último nós.

# - 💡 Exemplos de Uso
Adicione um livro:

