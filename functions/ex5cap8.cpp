// Fa�a uma sub - rotina que receba um valor inteiro e verifique se ele � positivo ou negativo.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

static int checkvalor(int numero) {

	if (numero>0)
	{
		printf("Positivo");
	}
	else
	{
		printf("Negativo");
	}

	return 0;
}

int main() {
	int answer;
	int resultado;

	printf("Informe o numero(Positivo ou Negativo)");
	scanf("%i", &answer);

	resultado = checkvalor(answer);

}