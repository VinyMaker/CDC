/**
CCF 110 - Programacao
Victor Vinicius Azevedo Ferreira
Lista 2.6C
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha=10,coluna=10;
    int matriz_numeros[linha][coluna];


    printf("===============================\n");
    printf("Preencha a matriz %d x %d:\n",linha,coluna);
    printf("===============================\n");

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz_numeros[i][j]);
        }
    }

    //OPERACAO
    printf("===============================\n");
    printf("Operacao conluida\n");
    printf("===============================\n");
    printf("Confira abaixo a nova matriz:\n");
    printf("===============================\n");

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(i!=j){
                printf("%d ",matriz_numeros[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
    }

