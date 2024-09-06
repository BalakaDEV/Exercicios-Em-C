// Um professor gostaria de saber dentre os nomes de seus 50 alunos, aqueles que compartilham o primeiro nome, ou seja, quem é xará de quem. 
// Portanto, faça um programa que leia os nomes de 50 estudantes, 
// e indique quais deles possuem seu xará na turma.

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
