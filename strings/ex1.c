// 1. Um usuário de redes sociais estava lendo 2 postagens e ficou curioso pra saber
// quais das postagens possuem mais palavras. Sendo assim, faça um programa que
// leia duas postagens que possuem, no máximo, 244 caracteres, e a seguir apresente
// quantas palavras tem cada postagem e indique a maior postagem.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char postagem1[244];
    char postagem2[244];
    int contadordeespacos1 = 0;
    int contadordeespacos2 = 0;

    printf("Insira a postagem 1: ");
    scanf("%[^\n]", postagem1);
    getchar();

    if (strlen(postagem1) > 244)
    {
        printf("Limite de caracteres antingido na postagem");
    }
        
    int resultado = strlen(postagem1);
    for(int i = 0; i < resultado; i++) {
        if(postagem1[i] == ' ' && isalnum(postagem1[i+1])) {
            contadordeespacos1++;
        }
    }

    printf("Insira a postagem 2: ");
    scanf("%[^\n]", postagem2);
    if (strlen(postagem2) > 244)
    {
        printf("Limite de caracteres antingido na postagem");
    }

    int resultado2 = strlen(postagem2);
    for(int i = 0; i < resultado2; i++) {
        if(postagem2[i] == ' ' && isalnum(postagem2[i+1])) {
            contadordeespacos2++;
        }
    }


    printf("A postagem 1 tem: %d palavras\n", contadordeespacos1 + 1);
    printf("A postagem 2 tem: %d palavras\n", contadordeespacos2 + 1);


    //agora comparo um com o outro

    if (contadordeespacos1 > contadordeespacos2) {
        printf("A postagem 1 tem mais palavras");
    } else if (contadordeespacos2 > contadordeespacos1) {
        printf("A postagem 2 tem mais palavras");
    } else {
        printf("Ambas as postagens têm o mesmo número de palavras");
    }
    
    return 0;
}
