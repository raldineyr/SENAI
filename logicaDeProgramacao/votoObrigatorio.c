#include <stdio.h>

int main(void)
{
  
  int num, contadorObrigatorio = 0, contadorOpcional = 0;

    do
    {
      printf("\n\n\t\tDigite a idade: ");
      scanf("%d", &num);
  
      if (num >= 18)
      {
        contadorObrigatorio++;
        printf("\t\tVoto obrigatório.");
      }

      else if (num > 15 && num < 18)
      {
        contadorOpcional++;
        printf("\t\tVoto opcional.");
      }
    
      else
      {
        printf("\t\tProibido votar."); 
      }

    } while(num >= 1);

      printf("\n\n\t\t%d Votos obrigatorios.\n",contadorObrigatorio);
      printf("\n\t\t%d Votos opcionais.\n",contadorOpcional);

  return 0;
}
