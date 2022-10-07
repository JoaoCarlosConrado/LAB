#include <stdio.h>
#include <stdlib.h>
#include "../lib/ordvetor.h"


int comparacao(void* x, void* y){
    if((int*)x == (int*)y){
        return 0;
    }else if((int*)x > (int*)y){
        return -1;
    }else{
        return 1;
    }
}

int main(){
    COMP* comp = comparacao;
    VETORORD* veto = VETORD_create(5, comp);
    
    VETORD_add(veto, (int*)5);
    VETORD_add(veto, (int*)2);
    VETORD_add(veto, (int*)3);
    VETORD_add(veto, (int*)1);
    VETORD_add(veto, (int*)4);
    printf("%d removido\n", VETORD_remove(veto));
    for(int i = 0;i<veto->P;i++){
        printf("%d ", veto->elems[i]);
    }
    
    return 0;
}