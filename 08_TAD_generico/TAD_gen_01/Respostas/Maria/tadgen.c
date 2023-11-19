#include "tadgen.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    void * dado;
    Type tipo;
}tElem;

struct generic{
    int numElementos;
    tElem ** elementos;
};

tGeneric* CriaGenerico(Type type, int numElem){
    tGeneric * generico = malloc(sizeof(struct generic));
    int i;
    
    generico->numElementos = numElem;
    generico->elementos = calloc(generico->numElementos, sizeof(tElem*));

    for(i=0; i<generico->numElementos; i++){
        generico->elementos[i] = calloc(1, sizeof(tElem));
        generico->elementos[i]->dado = calloc(1, sizeof(void *));
        generico->elementos[i]->tipo = type;
    }

    return generico;
}

void DestroiGenerico(tGeneric* gen){
    int i; 

    for(i=0; i<gen->numElementos; i++){
        free(gen->elementos[i]->dado);
        free(gen->elementos[i]);
    }

    free(gen->elementos);
    free(gen);
}

void LeGenerico(tGeneric* gen){
    int i; 

    printf("\nDigite o vetor:");

    for (i = 0; i < gen->numElementos; i++) {
        if (gen->elementos[i]->tipo == FLOAT) {
            scanf("%f", (float *)gen->elementos[i]->dado);
        } else if (gen->elementos[i]->tipo == INT) {
            scanf("%d", (int *)gen->elementos[i]->dado);
        }
    }

}

void ImprimeGenerico(tGeneric* gen){
    int i;

    printf("\n");

    for (i = 0; i < gen->numElementos; i++) {
        if (gen->elementos[i]->tipo == FLOAT) {
            printf("%.2f ", *((float *)gen->elementos[i]->dado));
        } else if (gen->elementos[i]->tipo == INT) {
            printf("%d ", *((int *)gen->elementos[i]->dado));
        }
    }
}

