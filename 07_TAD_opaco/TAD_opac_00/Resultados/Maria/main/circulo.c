//#include "ponto.h"
#include "circulo.h"
#include <stdlib.h>

struct circulo{
    tPonto centro;
    float r;
};

tCirculo Circulo_Cria(float x, float y, float r) {
    tCirculo circulo = (tCirculo)malloc(sizeof(struct circulo));
    
    tPonto centro = Pto_Cria(x, y);
    Circulo_Atribui_Centro(circulo, centro);

    Circulo_Atribui_Raio(circulo, r);
    
    return circulo;
}

void Circulo_Apaga (tCirculo c){
    Pto_Apaga(c->centro);
    free(c)
}

tPonto Circulo_Acessa_Centro (tCirculo c){
    return c->centro;
}

float Circulo_Acessa_Raio (tCirculo c){
    return c->r;
}


void Circulo_Atribui_Centro (tCirculo c, tPonto p){
    c->centro = p;
}

void Circulo_Atribui_Raio (tCirculo c, float r){
    c->r = r;
}

int Circulo_Interior (tCirculo c, tPonto p){

    float distancia = Pto_Distancia(Circulo_Acessa_Centro(c), p);
    if(distancia <= Circulo_Acessa_Raio(c)) return 1;
    else return 0;
}

