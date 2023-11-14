#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"

/* Definição do tipo opaco */
struct ponto{
    float x;
    float y;
};

/* Funções exportadas */

tPonto Pto_Cria(float x, float y) {
    tPonto ponto = (tPonto)malloc(sizeof(struct ponto));
    if (ponto != NULL) {
        Pto_Atribui_x(ponto, x);
        Pto_Atribui_y(ponto, y);
    }
    return ponto;
}

void Pto_Apaga (tPonto p){
    free(p);
}

float Pto_Acessa_x (tPonto p){
    return p->x;
}


float Pto_Acessa_y (tPonto p){
    return p->y;
}

void Pto_Atribui_x (tPonto p, float x){
    p->x = x;
}

void Pto_Atribui_y (tPonto p, float y){
    p->y = y;
}

float Pto_Distancia (tPonto p1, tPonto p2){
    float D = sqrt(pow((p2->x)-(p1->x), 2) + pow((p2->y)-(p1->y), 2));

    return D;
}

#endif /* _PONTO */
