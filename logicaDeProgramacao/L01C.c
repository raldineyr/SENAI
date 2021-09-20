#include <stdio.h>

int main(void) {

float raio, altura, volume;

printf("Informe o valor do raio: ");
scanf("%f", &raio);

printf("Informe o valor da altura: ");
scanf("%f", &altura);

volume = 3.14159 * (raio * raio)* altura;

printf("O volume é: %.2f", volume);

  return 0;
}
