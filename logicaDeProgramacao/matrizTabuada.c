#include<stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main()
{
    int linha, coluna;
    int tabela[LINHAS][COLUNAS];

    for(int multiplicando = 0; multiplicando < LINHAS; multiplicando++)
    {
        linha = multiplicando+1;
        //printf("%2d  ➝", linha);

        for(int multiplicador =1; multiplicador <= COLUNAS; multiplicador++)
        {
            coluna = multiplicador;

            tabela[multiplicando][multiplicador]= linha * coluna;

            printf("%4d",tabela[multiplicando][multiplicador]);
        }
        printf("\n");
    }

    return 0;
}
