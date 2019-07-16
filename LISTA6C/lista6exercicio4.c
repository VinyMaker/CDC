#include <stdio.h>

int main() {
    int tam_vetor=10;
    int numeros[tam_vetor],numeros_trocados[tam_vetor],i;

    printf("=============================================================\n");
    printf("Digite %d numero(s) inteiros para a criacao do segundo vetor:\n",tam_vetor);
    printf("=============================================================\n");

    for(i=0;i<tam_vetor;i++){
        scanf("%d",&numeros[i]);
        numeros_trocados[i]=numeros[i];
        if(numeros[i]<10){
            numeros_trocados[i]=1;
        }
    }
    printf("=============================================================\n");
    printf("================PROCESSO DE TROCA CONCLUIDO:=================\n");
    printf("=============================================================\n");

    printf("PRIMEIRO VETOR:\n");
    for(i=0;i<tam_vetor;i++){
        printf("%d",numeros[i]);
    }
    printf("SEGUNDO VETOR: \n");
    for (i = 0;i < tam_vetor; i++){
        printf("%d",numeros_trocados[i]);
    }
    return 0;
}