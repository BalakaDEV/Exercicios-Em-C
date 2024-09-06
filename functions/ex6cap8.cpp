//Crie uma sub - rotina que receba como parâmetro a altura(alt) e o sexo de uma pessoa e retorne seu peso ideal.
//Para homens, deverá calcular o peso ideal usando a fórmula : peso ideal = 72.7 * alt − 58; para mulheres : peso
//ideal = 62.1 * alt − 44.7.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//static void pesoideal(float alt, char sexo) {
//	float conta;
//
//	if (sexo == 'M') {
//		conta = 72.7 * alt - 58;
//		printf("Seu peso ideal é: %.2f\n", conta); 
//	}
//	else if (sexo == 'F') {
//		conta = 62.1 * alt - 44.7;
//		printf("Seu peso ideal é: %.2f\n", conta);
//	}
//	else {
//		printf("Sexo inválido! Por favor, insira 'M' ou 'F'.\n");
//	}
//}
//
//int main() {
//	float altura;
//	char sex;
//
//	printf("Insira sua altura: ");
//	scanf("%f", &altura);
//
//	printf("Insira seu sexo (M/F): ");
//	scanf(" %c", &sex); // Espaço antes do %c para ignorar qualquer caractere de nova linha restante
//
//	pesoideal(altura, sex);
//
//	return 0;
//}