#include <stdio.h>

int main(void) {

  float fahrenheit, celsius;
  
  printf("Digite a temperatura em F°: ");

  scanf("%f",&fahrenheit);

  celsius = (fahrenheit - 32) * (5/9.0);
  
  printf("A conversão de: %.2f F° é %.2f C°",fahrenheit, celsius);
  
  return 0;
}
