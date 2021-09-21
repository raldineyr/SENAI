#include <stdio.h>

int main(void) {

float comprimento, largura, altura, volume;

 puts("Informe as medidas da caixa!");

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("O volume da caixa é: %.2fm³, volume);

  return 0;
}
