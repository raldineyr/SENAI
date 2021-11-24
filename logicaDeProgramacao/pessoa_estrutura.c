#include <stdio.h>
#include <stdlib.h>

  struct pessoa {

    char nome[15];
    int idade;
    char endereco[45];

  };

int main(void) { 
  
struct pessoa dados;

  printf("\n\n\t\tInforme os teus dados abaixo.\n");

  printf("\n\t\tDigite o teu nome: ");
  scanf("%[^\n]",dados.nome);

  printf("\t\tDigite a tua idade: ");
  scanf("%d",&dados.idade);

  printf("\t\tInforme o teu endereço: ");
  scanf("%*c%[^\n]",dados.endereco);

  printf("\n\t\tOs dados informados foram: \n\n");

  printf("\t\tNome: %s\n",dados.nome);
  printf("\t\tIdade: %d\n",dados.idade);
  printf("\t\tEndereço: %s\n",dados.endereco);

  return 0;
}
