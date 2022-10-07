#include <stdio.h>
#include <stdlib.h>
#include "../lib/heap.h"


int comparacao(void* x, void* y){
    if((int*)x == (int*)y){
        return 0;
    }else if((int*)x > (int*)y){
        return 1;
    }else{
        return -1;
    }
}

int main(){
    COMP* comp = comparacao;
    HEAP* veto = HEAP_create(100, comp);
    
    HEAP_add(veto, (int*)5);
    HEAP_add(veto, (int*)2);
    HEAP_add(veto, (int*)3);
    HEAP_add(veto, (int*)1);
    HEAP_add(veto, (int*)4);
    HEAP_add(veto, (int*)27);
    HEAP_add(veto, (int*)20);
    HEAP_add(veto, (int*)10);
    HEAP_add(veto, (int*)9);
    HEAP_add(veto, (int*)8);
    HEAP_add(veto, (int*)6);
    HEAP_add(veto, (int*)15);
    HEAP_add(veto, (int*)12);
    HEAP_add(veto, (int*)18);
    HEAP_add(veto, (int*)7);
    HEAP_add(veto, (int*)38);
    HEAP_add(veto, (int*)16);
    HEAP_add(veto, (int*)14);
    HEAP_add(veto, (int*)11);
    HEAP_add(veto, (int*)30);
    HEAP_remove(veto);
    //printf("%d removido\n", HEAP_remove(veto));
    for(int i = 0;i<veto->P;i++){
        printf("%d ", veto->elems[i]);
    }
    
    return 0;
}