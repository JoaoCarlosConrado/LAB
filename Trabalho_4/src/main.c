#include <stdio.h>
#include <stdlib.h>
#include "../lib/ordvetor.h"

int main(){
    VETORORD* veto = VETORD_create(5, NULL);

    veto->elems[8] = "OI, eu sou o Goku!";
    printf("%s", veto->elems[8]);
    return 0;
}