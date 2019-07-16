#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,tamanho=10; //'i' para percorrer o vetor e 'tamanho' para definir o tamanho do vetor
    int Vetor_Aleatorio[tamanho];
    
    int *Vetor_Ponteiros[tamanho]; //vetor de enderecos, guardara os enderecos de Vetor_Aleatorio

    for(i=0;i<tamanho;i++){
        Vetor_Aleatorio[i] = rand(); // se desejar, 'n + rand() %valor' para limitar
        }

    for(i=0;i<tamanho;i++){
        Vetor_Ponteiros[i] = &Vetor_Aleatorio[i];
        }


    printf("===============================\n");
    printf("Vetor Aleatorio Gerado:\n");
    for(i=0;i<tamanho;i++){
        printf("%d\n",Vetor_Aleatorio[i]);
        printf("Seu endereco eh %d:\n", &Vetor_Aleatorio[i]);
        }
    
    printf("===============================\n");
    printf("Variaveis de Vetor_Aleatorio acessadas pelo endereco de Vetor_Aleatorio atraves de Vetor_Ponteiros: \n");
    for(i=0;i<tamanho;i++){
        printf("%d\n",*Vetor_Ponteiros[i]);
        printf("Seu endereco eh: %d\n", &Vetor_Ponteiros[i]);
        }
	printf("===============================\n");
    printf("========\n");
    printf("Bom dia!\n");
    return 0;
}
