#include <stdio.h>

int main(void) {

float valor, taxa, prestacao;
int tempo;
  
  printf("Informe o valor a pagar R$: ");
  scanf("%f", &valor);

  printf("Informe o tempo em dias: ");
  scanf("%d", &tempo);

  printf("Informe o valor da taxa R$: ");
  scanf("%f", &taxa);

  prestacao = valor + (valor * (taxa /100.00)* tempo);

  printf("Valor da prestação a pagar: R$%.2f", prestacao);

  return 0;
}
