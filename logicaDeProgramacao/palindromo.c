#include <stdio.h>

int main() {

  int numero, numero_armazenado, inversor;

  do{

   printf("\n\n\t\tInforme um numero natural de 4 digitos: ");
   scanf("%d", &numero);

  }while (numero <= 999 || numero > 9999);

  numero_armazenado = numero;
  inversor = 0;

  while (numero_armazenado != 0) {
    inversor = inversor * 10 + numero_armazenado % 10; 
    numero_armazenado = numero_armazenado / 10;                   
  }

  if (inversor == numero)
    printf("\n\t\t%d é um palindromo.", numero);
  else
    printf("\n\t\t%d não é um palindromo.", numero);

  return 0;
}
