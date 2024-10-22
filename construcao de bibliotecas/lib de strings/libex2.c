#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libex2.h"


#define MAX_PALAVRAS 100
#define MAX_TAMANHO_PALAVRA 50


void contar_vogais_consoantes(char postagem[], int *qtd_vogais, int *qtd_consoantes) {
    int tamanho = strlen(postagem);
    *qtd_vogais = 0;
    *qtd_consoantes = 0;

    for (int i = 0; i < tamanho; i++) {
        char ch = tolower(postagem[i]);

        if (isalpha(ch)) { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*qtd_vogais)++;
            } else {
                (*qtd_consoantes)++;
            }
        }
    }
}


void contar_palavras_post(char postagem[], int *contador_palavras) {
    int contadordeespacos = 0;
    int tamanho = strlen(postagem);

    if (tamanho > 244) {
        printf("Limite de caracteres atingido na postagem\n");
        *contador_palavras = 0;
        return;
    }

    for (int i = 0; i < tamanho; i++) {
        if (postagem[i] == ' ' && isalnum(postagem[i + 1])) {
            contadordeespacos++;
        }
    }

    *contador_palavras = contadordeespacos + 1;
}

char* encontrar_palavras_comuns(char postagem1[], char postagem2[]) {
    static char palavras_comuns[244] = "";
    char palavras1[MAX_PALAVRAS][MAX_TAMANHO_PALAVRA];
    char palavras2[MAX_PALAVRAS][MAX_TAMANHO_PALAVRA];
    int quantidade1 = 0, quantidade2 = 0;
    char temp1[244], temp2[244];
    
    strcpy(temp1, postagem1);
    strcpy(temp2, postagem2);
    
    int num_palavras1 = extrair_palavras(temp1, palavras1,&quantidade1);
    int num_palavras2 = extrair_palavras(temp2, palavras2, &quantidade2);
    

    palavras_comuns[0] = '\0';

    for (int i = 0; i < num_palavras1; i++) {
        for (int j = 0; j < num_palavras2; j++) {
            if (strcmp(palavras1[i], palavras2[j]) == 0) {
                strcat(palavras_comuns, palavras1[i]);
                strcat(palavras_comuns, " ");
            }
        }
    }
    
    return palavras_comuns;
}