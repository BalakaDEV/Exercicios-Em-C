#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "libex1.h"

int main() {
    struct Ponto p1, p2;
    struct Retangulo ret;
    double esquerdo, direito;

    printf("Informe as coordenadas do ponto 1 (x1 y1): ");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Informe as coordenadas do ponto 2 (x2 y2): ");
    scanf("%lf %lf", &p2.x, &p2.y);

    printf("Informe as coordenadas do retângulo (esquerdo direito): ");
    scanf("%lf %lf", &esquerdo, &direito);
    ret = criar_retangulo(esquerdo, direito);
 
    double dist = distancia(p1, p2);
    printf("Distância entre os dois pontos: %.2lf\n", dist);

    struct Ponto mais_proximo = maisProximoOrigem(p1, p2);
    printf("O ponto mais próximo da origem é: (%.2lf, %.2lf)\n", mais_proximo.x, mais_proximo.y);

    int contido1 = estaContido(p1, ret);
    int contido2 = estaContido(p2, ret);

    printf("O ponto 1 está %s no retângulo.\n", contido1 ? "contido" : "fora");
    printf("O ponto 2 está %s no retângulo.\n", contido2 ? "contido" : "fora");

    return 0;
}