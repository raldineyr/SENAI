#include <stdio.h>

int main(){

int contador, entrada = 0;

	printf("Digite o numero: ");
	scanf("%d", &entrada);
	
	for(contador = 1; contador <= entrada; contador = contador + 1){

	if (contador % entrada == 0){
		printf("O valor de %d e divisor de %d\n",contador, entrada);

	  }

  }
	return 0;
}
