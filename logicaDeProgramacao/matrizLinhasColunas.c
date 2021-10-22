#include <stdio.h>

int main(void) {
  
  int matriz[3][3], linha, coluna;

  printf("Digite o valor para os elementos: \n");

    for(linha = 0; linha < 3; linha++)
    for(coluna = 0; coluna < 3; coluna++){

      printf("Elementos [%d][%d]: = ", linha, coluna);
      scanf("%d", &matriz[linha][coluna]);

  }

  printf("\n\n\t************ SAÍDA DE DADOS ************\n\n");

  for(linha = 0; linha < 3; linha++)
    for(coluna = 0; coluna < 3; coluna++){

      printf("Elementos [%d][%d]: = %d\n", linha, coluna, matriz[linha][coluna]);
  }
  return 0;
}
