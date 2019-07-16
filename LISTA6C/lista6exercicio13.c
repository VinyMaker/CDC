/**
CCF 110 - Programaçao
Victor Vinicius Azevedo Ferreira
Lista 2.6C
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha=6,coluna=3;
    int matrizA[linha][coluna],matrizB[linha][coluna];
    int matrizS[linha][coluna],matrizD[linha][coluna];

    printf("===============================\n");
    printf("Preencha a matriz %d x %d:\n",linha,coluna);
    printf("===============================\n");
    printf("MATRIZ A\n");
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matrizA[i][j]);
            }
        }
    printf("MATRIZ B\n");
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matrizB[i][j]);
            }
        }
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            matrizS[i][j]=matrizA[i][j]+matrizB[i][j];
            matrizD[i][j]=matrizA[i][j]-matrizB[i][j];
        }
    }
    printf("===============================\n");
    printf("Operacao conluida\n");
    printf("===============================\n");
    printf("Confira abaixo as novas matrizes:\n");
    printf("===============================\n");

    printf("Matriz Soma;\n");
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("%d ",matrizS[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Diferenca:\n");
    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("%d ",matrizD[i][j]);
        }
        printf("\n");
    }


    return 0;
    }

