#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#include "ponto.h"

int main(){
    tCirculo *c = calloc(1, sizeof(tCirculo));
    float r = Circulo_Acessa_Raio(c);
    float x1, x2, y1, y2;
    tPonto *centro;
    tPonto *ponto;

    scanf("%f %f %f %f %f", &x1, &y1, &r, &x2, &y2);

    centro = Pto_Cria(x1, y1);
    Circulo_Atribui_Centro(c, centro);
    Circulo_Atribui_Raio(c, r);

    ponto = Pto_Cria(x2, y2);
    
    printf("%d\n", Circulo_Interior(c, ponto));
    
    Pto_Apaga(centro);
    Pto_Apaga(ponto);
    Circulo_Apaga(c);

    return 0;
}