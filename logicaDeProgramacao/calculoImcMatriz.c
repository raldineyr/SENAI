#include <stdio.h>
#include <math.h>

int main(void) {
  
  float peso, altura, imc;
  unsigned int quantidade, x;

  printf("\n\n\t Informe quantas pessoas (0 para finalizar): ");
  scanf("%d",&quantidade);

  if (quantidade != 0){
    float pessoa[3][quantidade];
    
    for(x = 0; x < quantidade; x++)
    {

        printf("\n\n\t Dados da pessoa %d: ", x);
        printf("\n\t Digite o \"peso\" em kg: ");
        scanf("%f",&pessoa[0][x]);
        printf("\t Digite a altura em metros: ");
        scanf("%f",&pessoa[1][x]);

        pessoa[2][x] = pessoa[0][x] / pow(pessoa[1][x],2); // Calculo IMC
    }

    do{
    printf("\n\n\t De quem deseja saber o IMC?");
    printf("\n\t (%d ou mais para finalizar) Pessoa numero: ",quantidade);
    scanf("%d",&x);

    if (x < quantidade)

    printf("\n\n\t o IMC da pessoa %d e: %.1f \n\n", x, pessoa[2][x]);

     else printf("\n\nPrograma encerrado!\n");
    

    } while(x < quantidade);

  } else 
    printf("\n\n\t Voce digitou 0. O programa sera finalizado. \n\n");
   return 0;
}
