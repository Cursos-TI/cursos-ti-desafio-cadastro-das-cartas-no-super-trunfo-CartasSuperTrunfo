#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int temperatura = 32;
   int resultado;



  // condicao ? verdadeiro : faldos;
resultado = temperatura >= 30 ? 1 : 0;

if(resultado == 1){
  printf("Está um calor de matar!\n"); 
} else {
  printf("Está um clima fresco!\n");
}

return 0;
}