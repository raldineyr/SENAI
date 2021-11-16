#include <stdio.h>

int adicao_recursiva();
void divisao_recursiva();

int main()
{

  int numero, resultado_soma;
  
  printf("\n\n\t\tInforme o numero: ");
  scanf("%d", &numero);
  
  resultado_soma = adicao_recursiva(numero);
  printf("\n\t\tA soma recursiva entre 0 e %d é: %d\n", numero, resultado_soma);
  
  divisao_recursiva(numero);

}

int adicao_recursiva (int x)
{

    if (x == 0) return 0;
    else return x + adicao_recursiva (x - 1);

}

 void divisao_recursiva(int y)
{

  int linha = 1;
  for (int contador = 1; contador <= y; contador++)
  {
   if (y % contador == 0) printf("\n\t\t%dº Divisor: %d",linha++, contador);
  }
  
}  
