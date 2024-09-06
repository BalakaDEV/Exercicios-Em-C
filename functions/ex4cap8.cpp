// Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
// o seu volume: v = 4/3 * R^3


#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

double calcvolume(int raio) {
   double volume;

   // Calcula o volume da esfera
   volume = (4.0 / 3.0) * pow(raio, 3); 

   return volume;
}

int main() {
   int r;
   double result;

   printf("Insira o raio da esfera: ");
   scanf("%i", &r);

   result = calcvolume(r);

   printf("O volume da esfera �: %.2lf\n", result);

   return 0;
}
