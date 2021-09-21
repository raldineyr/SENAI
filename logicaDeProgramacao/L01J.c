#include <stdio.h>

int main(void) {

float real, cotacaoDoDolar, dolar;

printf("Informe o valor da cotação do dólar: ");
scanf("%f", &cotacaoDoDolar);

printf("Informe o valor em dolar disponivel U$: ");
scanf("%f", &dolar);

real = dolar * cotacaoDoDolar;

printf("A conversão resulta em R$ %.2f.", real);

  return 0;
}
