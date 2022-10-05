#include <stdio.h>
#include <stdlib.h>
#include "../lib/ordvetor.h"

VETORORD* VETORD_create(int n, COMP* compara){
    VETORORD* vetorord = malloc(sizeof(VETORORD));
    vetorord->comparador = compara;
    vetorord->elems = malloc(sizeof(vetorord->elems));
    vetorord->N = n;
    vetorord->P = 0;
    for(int i = 0;i<n;i++){
        vetorord->elems[i] = NULL;
    }
    return vetorord;
}

void VETORD_add(VETORORD* vetor, void* newelem){
    
}

void* VETORD_remove(VETORORD* vetor){

}