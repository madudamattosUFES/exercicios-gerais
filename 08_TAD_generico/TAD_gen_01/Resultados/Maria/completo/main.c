#include <stdio.h>
#include <stdlib.h>
#include "tadgen.h"

int main (){
    int tipo;
    int numElem;
    tGeneric* gen = NULL;
    printf("tad_gen_01");
    
    printf("\nDigite o tipo e numero de elementos:");
    scanf("%d %d", &tipo, &numElem);

    gen = CriaGenerico(tipo, numElem);
    
    // printf("Digite o vetor:\n");

    LeGenerico(gen);

    ImprimeGenerico(gen);

    DestroiGenerico(gen);

    return 0;
}