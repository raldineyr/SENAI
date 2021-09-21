#include <stdio.h>

int main(void) {

int A, B, receptor;

printf("Informe o valor da variavel A: ");
scanf("%d", &A);

printf("Informe o valor da variavel B: ");
scanf("%d", &B);

receptor = A;
A = B;
B = receptor;

printf("A: %d\nB: %d\n",A, B);  

  return 0;
}
