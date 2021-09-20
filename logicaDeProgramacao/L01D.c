#include <stdio.h>

int main(void) {

  float tempoGasto, velocidadeMedia, distanciaTotal, litrosUsado;

  printf("Informe a duração total da viagem em hora: ");
  scanf("%f", &tempoGasto);

  printf("Informe a velocidade media do transporte em km/h: ");
  scanf("%f", &velocidadeMedia);

  distanciaTotal = velocidadeMedia * tempoGasto;

 litrosUsado = distanciaTotal / 12.0;

printf("Velocidade média %.2f Km/h\nDistância pecorrida %.2f Km\nQuantidade total de litros gastos %.2fL\n",velocidadeMedia,distanciaTotal,litrosUsado);

  return 0;
}
