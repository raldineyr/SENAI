#include <stdio.h>

int main(void) {
  
  struct administrador {
    
    int capacidade;
    float alturaMinima;
    float alturaMaxima;

  };
  
  struct administrador documentacao;

  struct cliente {
    
    char nome[45];
    float altura;

  };

  struct cliente usuario;

  int lotacaoPermitida = 0;

  printf("\n\n\t\tBem vindo ao Jurasic Park!");
  puts("\n\t\tInforme os dados abaixo ADM. ");

  printf("\n\t\tInforme a capacidade de lotação: ");
  scanf("%d",&documentacao.capacidade);

  printf("\t\tInforme a altura minima permitida: ");
  scanf("%f",&documentacao.alturaMinima);

  printf("\t\tInforme a altura máxima permitida: ");
  scanf("%f",&documentacao.alturaMaxima);

  printf("\n\t\tSistema atualizado!");

  printf("\n\n\t\tCadastro de clientes abaixo!");

  do{

    printf("\n\n\t\tInfome o seu nome: ");
    scanf("%s",&usuario.nome);

    printf("\t\tInfome a sua altura: ");
    scanf("%f",&usuario.altura);


    if(usuario.altura > documentacao.alturaMinima && usuario.altura < documentacao.alturaMaxima)
    {
      printf("\n\t\tOlá %s bem vindo ao Jurasic World!\n",usuario.nome);

      printf("\n\t\t\"E se prepare que hoje a noite\n");
      printf("\t\tTu vai para selva e vai morrer de gritar!\n");
      printf("\t\tSe não correr os dinossauros\n");
      printf("\t\tvão te pegar!!!\"");
    }

    else
    {
      printf("\n\n\t\tParque fechado, lotação máxima estabelecida.");
    }

      lotacaoPermitida ++;

  } while(lotacaoPermitida != documentacao.capacidade);

  printf("\n\n\t\tVolte sempre!");

  return 0;
}
