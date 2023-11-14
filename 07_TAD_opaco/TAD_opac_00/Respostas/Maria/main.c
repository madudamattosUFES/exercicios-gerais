#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#include "ponto.h"

int main(){
    tCirculo *c;
    float r = Circulo_Acessa_Raio(c);
    tPonto c = Circulo_Acessa_Centro(c);
    float x1, x2, y1, y2;

    scanf("%f %f %f %f %f", &x1, &y1, &r, &x2, &y2);

    
    printf("%d\n", Circulo_Interior(c, p2));
    return 0;
}