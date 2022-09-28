#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
     //Variáveis que podem ser usadas
     int x;
     int y;
     int z;
     int k;
     int w;
     int j;
     int i;
     
     //#########################
     y = 0;
     z = 0;
     printf("Digite números entre 0 e 31: \n");
     while(x != -1){
       scanf("%d", &x);
       if(x!=-1){
           y = y | (1 << x);
       }
     }
     x = 0;
     printf("Números Digitados: \n");
     while(x<32){
       if((y >> x) & 1){
         printf("%d\n", x);
       }
       x++;
     }
     //#########################
   
  return 0;  
}
