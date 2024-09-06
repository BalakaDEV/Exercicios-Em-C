#include <stdio.h>
#include <string.h>

int main() {
    char nomes[50][100]; 
    int x;

    printf("Digite os nomes dos 50 alunos:\n");
    for (int i = 0; i < 50; ++i) {
        printf("Digite o nome do %do aluno: ", i + 1);
        scanf("%s", nomes[i]); 
    }

    for (int i = 0; i < 50; i++) {
        x = 0; 
        for (int j = i + 1; j < 50; j++) {
            if (strcmp(nomes[i], nomes[j]) == 0) { 
                x++;
            }
        }

        if (x > 0) {
            printf("%s possui %d xaras\n", nomes[i], x);
        }
    }

    return 0;
}
