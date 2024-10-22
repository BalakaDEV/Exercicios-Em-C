#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libex2.h"


int main() {
    char postagem1[244], postagem2[244];
    int contador_palavras1, contador_palavras2;
    int qtd_vogais1, qtd_consoantes1, qtd_vogais2, qtd_consoantes2;


    printf("Insira a postagem 1: ");
    scanf("%[^\n]", postagem1);
    getchar();  
    printf("Insira a postagem 2: ");
    scanf("%[^\n]", postagem2);


    contar_palavras_post(postagem1, &contador_palavras1);
    printf("A postagem 1 tem: %d palavras\n", contador_palavras1);

    
    contar_vogais_consoantes(postagem1, &qtd_vogais1, &qtd_consoantes1);
    printf("Postagem 1: %d vogais e %d consoantes.\n", qtd_vogais1, qtd_consoantes1);

    contar_palavras_post(postagem2, &contador_palavras2);
    printf("A postagem 2 tem: %d palavras\n", contador_palavras2);


    contar_vogais_consoantes(postagem2, &qtd_vogais2, &qtd_consoantes2);
    printf("Postagem 2: %d vogais e %d consoantes.\n", qtd_vogais2, qtd_consoantes2);


    char *palavras_comuns = encontrar_palavras_comuns(postagem1, postagem2);
    if (strlen(palavras_comuns) > 0) {
        printf("Palavras em comum: %s\n", palavras_comuns);
    } else {
        printf("Não há palavras em comum entre as duas postagens.\n");
    }

    return 0;
}
