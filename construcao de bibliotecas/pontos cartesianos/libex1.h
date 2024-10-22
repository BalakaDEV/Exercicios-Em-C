#ifndef __LIBEX1_H__
#define __LIBEX1_H__

struct Ponto {
    double x;
    double y;
};

struct Retangulo {
    double esquerdo;
    double direito;
};

// header
struct Ponto criar_ponto(double x, double y);  
struct Retangulo criar_retangulo(double esquerdo, double direito);
double distancia(struct Ponto p1, struct Ponto p2);
struct Ponto maisProximoOrigem(struct Ponto p1, struct Ponto p2);
int estaContido(struct Ponto p, struct Retangulo r);

#endif

