#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "libex1.h"

struct Ponto criar_ponto(double x, double y) {
    struct Ponto p;  
    p.x = x;         
    p.y = y;         
    return p;   
}   

struct Retangulo criar_retangulo(double esquerdo, double direito){
    struct Retangulo r;
    r.esquerdo = esquerdo;
    r.direito = direito;
    return r;
}

double distancia(struct Ponto p1, struct Ponto p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    
    double dist = sqrt(dx * dx + dy * dy);
    return dist;
}

struct Ponto maisProximoOrigem(struct Ponto p1, struct Ponto p2) {
    struct Ponto origem = criar_ponto(0.0, 0.0);  

    double dist1 = distancia(p1, origem);
    double dist2 = distancia(p2, origem);
    
    if (dist1 < dist2) {
        return p1;
    } else {
        return p2;
    }
}

// void estaContido(struct Ponto p1, struct Ponto p2,struct Retangulo esquerdo, struct Retangulo direito){

// }

int estaContido(struct Ponto p, struct Retangulo r) {
    if (p.x >= r.esquerdo && p.x <= r.direito) {
        return 1; 
    } else {
        return 0;
    }
}
