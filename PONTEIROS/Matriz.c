#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,tamanho,inicializa=0;
    printf("Digite o tamanho da matriz NxN:\t");
	scanf("%d",&tamanho);
    int *Ponteiros_Matriz[tamanho][tamanho];
    int *Ponteiros_0=&inicializa;
    int *Ponteiros_preenchimento=&inicializa;

    printf("INICIALIZANDO==================\n");
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            Ponteiros_Matriz[i][j] = *Ponteiros_0;
        }
    }
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            printf("%d ",Ponteiros_Matriz[i][j]);
        }
        printf("\n");
    }
    printf("===============================\n");

    printf("OPERACAO=======================\n");
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            Ponteiros_Matriz[i][j] = *Ponteiros_preenchimento;
            *Ponteiros_preenchimento += 1;
        }

    }

    printf("===============================\n");
    printf("FINAL==========================\n");
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            printf("%d ",*(Ponteiros_Matriz+i)+j);
        }
        printf("\n");
    }
    printf("===============================\n");


    printf("===============================\n");
    printf("Bom dia!\n");
    return 0;
}
