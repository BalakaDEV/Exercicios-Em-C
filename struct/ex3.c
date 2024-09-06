// Uma professora aposentada deseja organizar sua biblioteca pessoal, sendo assim ela te chamou para fazer um programa que possa cadastrar cada um de seus livros (max. 200), 
// sendo que cada livro é representado por nome, ISBN, gênero, número de páginas e quantas vezes foi lido. 
// Além do cadastro seu programa deve Listar a Biblioteca, 
// bem como permitir consulta por nome e por gênero. 

#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 200
#define MAX_CHAR 100

struct Livro {
    char nome_livro[MAX_CHAR];
    char isbn[MAX_CHAR];
    char genero[MAX_CHAR];
    int numero_paginas;
    int qtd_lido;
};

int main() {
    struct Livro biblioteca[MAX_LIVROS];  
    int total_livros = 0; 
    int opcao = 0;

    do {
        printf("----BIBLIOTECA PESSOAL----\n");
        printf("1. REGISTRAR LIVRO\n");
        printf("2. LISTAR BIBLIOTECA\n");
        printf("3. CONSULTAR LIVRO (NOME/GENERO)\n");
        printf("4. SAIR\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); 

        switch (opcao) {
        case 1:
            if (total_livros < MAX_LIVROS) {
                printf("Digite o nome do livro: ");
                scanf(" %[^\n]", biblioteca[total_livros].nome_livro);

                printf("Digite o ISBN do livro: ");
                scanf(" %[^\n]", biblioteca[total_livros].isbn);

                printf("Digite o gênero do livro: ");
                scanf(" %[^\n]", biblioteca[total_livros].genero);

                printf("Digite o número de páginas do livro: ");
                scanf("%d", &biblioteca[total_livros].numero_paginas);

                printf("Digite quantas vezes leu o livro: ");
                scanf("%d", &biblioteca[total_livros].qtd_lido);

                total_livros++;
            } else {
                printf("Limite de livros atingido!\n");
            }
            break;

        case 2:
            printf("LISTA DE LIVROS:\n");
            for (int i = 0; i < total_livros; i++) {
                printf("Livro %d:\n", i + 1);
                printf("Nome: %s\n", biblioteca[i].nome_livro);
                printf("ISBN: %s\n", biblioteca[i].isbn);
                printf("Gênero: %s\n", biblioteca[i].genero);
                printf("Número de páginas: %d\n", biblioteca[i].numero_paginas);
                printf("Quantidade de vezes lido: %d\n", biblioteca[i].qtd_lido);
                printf("-----------------------\n");
            }
            break;

        case 3: {
            char consulta[MAX_CHAR];
            printf("Digite o nome ou gênero para consulta: ");
            scanf(" %[^\n]", consulta);

            printf("RESULTADO DA CONSULTA:\n");
            for (int i = 0; i < total_livros; i++) {
                if (strcmp(biblioteca[i].nome_livro, consulta) == 0 || strcmp(biblioteca[i].genero, consulta) == 0) {
                    printf("Livro %d:\n", i + 1);
                    printf("Nome: %s\n", biblioteca[i].nome_livro);
                    printf("ISBN: %s\n", biblioteca[i].isbn);
                    printf("Gênero: %s\n", biblioteca[i].genero);
                    printf("Número de páginas: %d\n", biblioteca[i].numero_paginas);
                    printf("Quantidade de vezes lido: %d\n", biblioteca[i].qtd_lido);
                    printf("-----------------------\n");
                }
            }
            break;
        }

        case 4:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 4);

    return 0;
}
