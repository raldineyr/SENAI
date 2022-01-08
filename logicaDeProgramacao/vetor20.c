#include <stdio.h>

int main(void)
{
  
  long int vetor[20];
  scanf("%ld",&vetor[0]);

  if(vetor[0] % 2 == 0)
  {
    for (int contador = 1; contador < 20 ; contador += 1)
    {
      vetor[contador] = vetor[0] *= 2;
      printf("%ld\n",vetor[contador] + 1);
    }
  } 

  else
  {
    for (int contador = 1; contador < 20 ; contador += 1)
    {
      vetor[contador] = vetor[0] *= 3;
      printf("%ld\n",vetor[contador] + 3);
    }
  }
  return 0;
}
