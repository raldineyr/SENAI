#include <stdio.h>

int main(void) {

float celsius, fahrenheit;

printf("Digite a temperatura em C°: ");

scanf("%f", &celsius);

fahrenheit = ( 9 * celsius + 160) / 5.0;

printf ("A conversão de: %.2f C° é %.2f F°", celsius , fahrenheit);

  return 0;
}
