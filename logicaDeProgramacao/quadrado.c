#include <stdio.h>

int main(void) {
  
  float num1, num2;
  scanf("%f %f", &num1, &num2);

  if (num1 == num2) printf("Quadrado de area: %.2f", num1 * num2);
  else if (num1 != num2) printf("Retângulo de area: %.2f", num1 * num2);

  return 0;
}
