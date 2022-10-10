#include <stdio.h>
#include <stdlib.h>
#include "../lib/heap.h"


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
    HEAP* veto = HEAP_create(100, comp);
    int in = 0;
    while(in >= 0){
        printf("NUM: ");
        scanf("%d", &in);
        if(in >= 0)
        HEAP_add(veto, (int*)in);
    }
    
    
    //veto->elems[200] = "oi";
    //printf("%d removido\n", HEAP_remove(veto));
    for(int i = 0;i<veto->P;i++){
        printf("%d ", veto->elems[i]);
    }
    //printf(veto->elems[200]);
    return 0;
}