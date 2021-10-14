#include <stdio.h>
int main() {

    int numero, fatorial = 1;

  numero = 1;
  
  if (numero < 0){
    printf("Não existe fatorial para numeros menores que zero.\n");

  } else { 

      for (int contador = 1; contador <= 10; ++contador){
        
        fatorial *= contador;

      if (numero % 2 != 0){
      printf("O fatorial de %d é: %d.\n",numero, fatorial);

      }
      numero++;
    } 
  }
  return 0;
}
