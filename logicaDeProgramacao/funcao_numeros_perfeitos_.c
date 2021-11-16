#include <stdio.h>

void divisao_recursiva();
void algarismo_perfeito();
void quadrado_algarismo_perfeito();

int main()
{ 
  int numero[5], resultado_soma, linha = 1;
  
  for (int contador = 0; contador < 5; contador++)
  {
    printf("\n\t\tInforme o %d° numero: ",linha++);
    scanf("%d",&numero[contador]);

  }

  for (int contador = 0; contador < 5; contador++)
  {
    printf("\n\n\n\t\tDivisores de %d: \n",numero[contador]);
  
    divisao_recursiva(numero[contador]);
    algarismo_perfeito(numero[contador]);
    quadrado_algarismo_perfeito(numero[contador]);
  }

}

 void divisao_recursiva(int x)
{
  int linha = 1;

for (int contador = 1; contador < x; contador++)
  {
    if (x % contador == 0) printf("\n\t\t%dº Divisor: %d",linha++, contador);
  }
  
}

void algarismo_perfeito(int y)
{
  int armazenador = 0;

  for (int contador = 1; contador < y; contador++)
  {    
    if (y % contador == 0) armazenador += contador; 
  }
  if (armazenador == y) printf("\n\n\t\t%d é um numero perfeito.",y);
  else printf("\n\n\t\t%d não é um numero perfeito.",y);
}

void quadrado_algarismo_perfeito(int z)
{
  int armazenador = 0;

  for (int contador = 1; contador < z; contador++)
  {
    if (z % contador == 0) armazenador += contador; 
  }
    if (armazenador == z) printf("\n\t\tO quadrado de %d é: %d",z, z * z);
}
