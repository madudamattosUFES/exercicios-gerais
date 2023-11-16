#include "aluno.h"
#include <stdlib.h>
#include <stdio.h>

struct Aluno{
    char *nome;
    int mat;
    int n1;
    int n2;
    int n3;
};

tAluno* CriaAluno(){
    tAluno *aluno = (tAluno*) malloc(sizeof(tAluno));
    
    aluno->nome = NULL;
    aluno-> mat = -1; 
    aluno-> n1 = -1;
    aluno-> n2 = -1;
    aluno-> n3 = -1;
} 

void ApagaAluno(tAluno *aluno){
    free(aluno->nome);
    free(aluno);
}

void LeAluno(tAluno *aluno){
    char letra = '\0';
    int i=0;

    while(letra != '\n'){
        scanf("%c", &letra);
        aluno->nome = realloc(aluno->nome, (i+1)*sizeof(char));
        aluno->nome[i] = letra;
    }

    aluno->nome = realloc(aluno->nome, (i+1)*sizeof(char));
    aluno->nome[i] = '\0';

    scanf("%03d\n", &aluno->mat);
    scanf("%d %d %d\n", &aluno->n1, &aluno->n2, &aluno->n3);
}

int ComparaMatricula(tAluno* aluno1, tAluno* aluno2){
    if(aluno1->mat > aluno2->mat) return 1;
    else if(aluno1->mat < aluno2->mat) return -1;
    else return 0;
}

int CalculaMediaAluno(tAluno* aluno){
    return (aluno->n1 + aluno->n2 + aluno->n3)/3 ;
}

int VerificaAprovacao(tAluno* aluno){
    if(CalculaMediaAluno(aluno)>= 7) return 1;
    else return 0;
}

void ImprimeAluno(tAluno* aluno){
    printf("%s", aluno->nome);
}

