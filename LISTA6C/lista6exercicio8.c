/**
CCF 110 - Programaçao
Victor Vinicius Azevedo Ferreira
Lista 2.6B
**/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int coluna=3;
    int vetor_numeros[coluna];
    int maior,posicao_maior_i=0;
    int menor,posicao_menor_i=0;

    vetor_numeros[0]=0;
    maior=vetor_numeros[0];
    menor=maior;

    printf("===============================\n");
    printf("Preencha o vetor %d:\n",coluna);
    printf("===============================\n");
    
    int i;
	for(i=0;i<coluna;i++){
        printf("Digite um numero para a posicao [%d]: ",i);
        scanf("%d",&vetor_numeros[i]);
        if(vetor_numeros[i]>maior){
            posicao_maior_i=i;
            maior=vetor_numeros[i];
        }
    }

    for(i=0;i<coluna;i++){
        if(vetor_numeros[i]<menor){
            posicao_menor_i=i;
            menor=vetor_numeros[i];
        }
    }
    printf("===============================\n");
    printf("Operacao conluida\n");
    printf("===============================\n");
    printf("O maior numero eh %d na posicao [%d]\n",maior,posicao_maior_i);
    printf("O menor numero eh %d na posicao [%d]\n",menor,posicao_menor_i);
    printf("===============================\n");


    return 0;
    }

