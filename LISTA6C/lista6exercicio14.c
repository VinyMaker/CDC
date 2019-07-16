/**
CCF 110 - Programacao
Victor Vinicius Azevedo Ferreira
Lista 2.6C
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha=5,coluna=5;
    int matriz_numeros[linha][coluna],soma=0;
    float media=0;

    printf("===============================\n");
    printf("Preencha a matriz %d x %d:\n",linha,coluna);
    printf("===============================\n");

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz_numeros[i][j]);
            if(i==j){
                soma=(soma+matriz_numeros[i][j]);
            }
        }
    }
    printf("%d",soma);

    //OPERACAO

    for(int i=0;i<linha;i++){
        for(int j=0;j<coluna;j++){
            if(i==j){
                media = (soma/linha);
            }
        }
    }
    printf("===============================\n");
    printf("Operacao conluida\n");
    printf("===============================\n");
    printf("Confira abaixo a media:\n");
    printf("===============================\n");
    printf("A Media eh %.2f",media);


    return 0;
    }

