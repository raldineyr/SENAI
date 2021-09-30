#include <stdio.h>

int main(void) {

  int A, B, C, D, E;
  
  printf("Digite cinco numeros: ");
  scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

  if(A > B && A > C && A > D && A > E) printf("A: %d é o maior\n", A);
  else if(B > C && B > D && B > E) printf("B: %d é o maior\n", B);
  else if(C > D && C > E) printf("C: %d é o maior\n", C);
  else if (D > E) printf("D: %d é o maior\n\n", D);
  else printf("E: %d é o maior\n",E);

  if(A < B && A < C && A < D && A < E) printf("A: %d é o menor\n", A);
  else if(B < C && B < D && B < E) printf("B: %d é o menor\n", B);
  else if(C < D && C < E) printf("C: %d é o menor\n", C);
  else if (D < E) printf("D: %d é o menor\n\n", D);
  else printf("E: %d é o menor\n",E);

  return 0;
}
