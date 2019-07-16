/**
CCF 110 - Programacao
Victor Vinicius Azevedo Ferreira
Lista 2.6B
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha=3,coluna=5;
    int minimo=15,maximo=20;
    int matriz_numeros[linha][coluna];
    int quant_valores=0;

    printf("===============================\n");
    printf("Preencha a matriz %d x %d: \n",linha,coluna);
    printf("===============================\n");

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz_numeros[i][j]);
            if(matriz_numeros[i][j]>minimo && matriz_numeros[i][j]<maximo){
                quant_valores++;
            }
        }
    }

    printf("===============================\n");
    printf("Operacao conluida\n");
    printf("===============================\n");
    printf("A quantidade de numeros que atendem a condicao eh de %d \n",quant_valores);
    printf("===============================");

    return 0;
    }
