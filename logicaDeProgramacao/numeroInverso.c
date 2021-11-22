#include <stdio.h>

int main(void) {

  int numero, ultimoValor;

  printf("Digite um numero inteiro: ");
  scanf("%d",&numero);

  if (numero >= 0)
  {

    do 
    {
     ultimoValor = numero % 10;
     printf("%d",ultimoValor);
     
     numero /= 10;

    } while(numero != 0);
  
  }

  else if (numero < 1)
  {
    numero *= -1;
    printf("-");

    do 
    {
     ultimoValor = numero % 10;
     printf("%d",ultimoValor);
     
     numero /= 10;

    } while(numero != 0);

  }
  
  return 0;
}
