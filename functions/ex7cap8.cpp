// Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmé-
// tica desses valores. Terminar a entrada de dados com o valor zero.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int calculo(int valor) {
    int fatorial = 1; 
    int n; 

    for (n = valor; n > 1; n--) {
        fatorial = fatorial * n; 
    }

    return fatorial; 
}

int main() {
    int numero;
    int result;

    printf("Insira o valor: ");
    scanf("%i", &numero);

    if (numero < 0) {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
        return 1;
    }

    result = calculo(numero);

    printf("O fatorial desse numero �: %i\n", result);
    return 0; 
}
