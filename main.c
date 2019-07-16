#include <stdio.h>
#include <stdlib.h>

int main(){
	int linha=4,coluna=4,i,j;
    int matriz_numeros[linha][coluna];
    float media,soma=0;

    printf("===============================\n");
    printf("Preencha a matriz %d x %d: \n",linha,coluna);
    printf("===============================\n");

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("Digite um numero para a posicao [%d][%d]: ",i,j);
            scanf("%d",&matriz_numeros[i][j]);
            if(i<j && i+j+1<linha){
					soma+=matriz_numeros[i][j];
			}
		}
	}
	for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
        	if(i<j && i+j+1<linha){
					media=soma/linha;
			}
        }
        printf("\n");
    }
    printf("media: %.3f\n",media);
    printf("soma: %.1f\n",soma);
    return 0;
    }
 //if(j>i && j-i>coluna){ if(i+j+1==linha){
