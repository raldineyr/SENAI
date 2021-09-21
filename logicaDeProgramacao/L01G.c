#include <stdio.h>

int main(void) {

int A, B, C, D;
printf("Informe os respectivos valores de A, B, C e D: ");
scanf("%d %d %d %d", &A, &B, &C, &D);

  printf("A + B = %d\nA + C = %d\nA + D = %d\n",A + B, A + C, A + D);
  printf("A * B = %d\nA * C = %d\nA * D = %d\n",A * B, A * C, A * D);

  printf("B + C = %d\nB + D = %d\n", B + C, B + D);
  printf("B * C = %d\nB * D = %d\n", B * C, B * D);

  printf("C + D = %d\n", C + D);
  printf("C * D = %d\n", C * D);

  return 0;
}
