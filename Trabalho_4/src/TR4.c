#include <stdio.h>
#include <stdlib.h>
#include "../lib/ordvetor.h"

VETORORD* VETORD_create(int n, COMP* compara){
    VETORORD* vetorord = malloc(sizeof(VETORORD));
    vetorord->comparador = compara;
    vetorord->N = n;
    vetorord->P = 0;
    for(int i = 0;i<n;i++){
        vetorord->elems[i] = NULL;
    }
    return vetorord;
}

void VETORD_add(VETORORD* vetor, void* newelem){
    if(vetor->P < vetor->N){
        for(int i = 0;i<=vetor->P;i++){
            if(vetor->P == 0){
                vetor->elems[vetor->P] = newelem;
                vetor->P++;
                break;
            }else if(vetor->comparador(newelem, vetor->elems[vetor->P-1]) == -1){
                vetor->elems[vetor->P] = newelem;
                vetor->P++;
                break;
            }else if((vetor->comparador(newelem, vetor->elems[i]) == 1)||(vetor->comparador(newelem, vetor->elems[i]) == 0)){
                for(int j = vetor->P;j>i;j--){
                    vetor->elems[j] = vetor->elems[j-1];
                }
                vetor->elems[i] = newelem;
                vetor->P++;
                break;
            }
        }
    }
}

void* VETORD_remove(VETORORD* vetor){
    void* aux = vetor->elems[0];
    for(int i = 0;i<vetor->P;i++){
        vetor->elems[i] = vetor->elems[i+1]; 
    }
    vetor->P--;
    return aux;
}