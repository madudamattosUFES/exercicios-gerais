#include "ponto.h"
#include "circulo.h"

struct circulo{
    tPonto c;
    float r;
};

tCirculo Circulo_Cria(float x, float y, float r) {
    tCirculo circulo = (tCirculo)malloc(sizeof(struct circulo));
    if (circulo != NULL) {
        circulo->c = Pto_Cria(x, y);
        circulo->r = r;
    }
    return circulo;
}

void Circulo_Apaga (tCirculo c){
    Pto_Apaga(c->c);
    free(c)
}

tPonto Circulo_Acessa_Centro (tCirculo c){
    return c->p;
}

float Circulo_Acessa_Raio (tCirculo c){
    return c->r;
}


void Circulo_Atribui_Centro (tCirculo c, tPonto p){
    c->p = p;
}

void Circulo_Atribui_Raio (tCirculo c, float r){
    c->r = r;
}

int Circulo_Interior (tCirculo c, tPonto p){
    if(Pto_Distancia(c->p, p) <= c->r) return 1;

    else return 0;
}

