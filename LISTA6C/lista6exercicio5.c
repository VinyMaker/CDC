#include <stdio.h>

int main() {
    int tam_vetor=10; //tamanho do vetor
    int vetor_numeros[tam_vetor],vetor_numeros_2[tam_vetor],vetor_resultante[tam_vetor*2],i,j;
    printf("======================================================================\n");
    printf("Preencha 2 vetores de %d posicoes para intercalar em um terceiro vetor\n",tam_vetor);
    printf("======================================================================\n");

    for (i = 0; i < tam_vetor; i++) {
        printf("Digite um numero para a posicao %d do vetor 1:\n",i);
        scanf("%d",&vetor_numeros[i]);
    }
    for (i = 0; i < tam_vetor; i++) {
        printf("Digite um numero para a posicao %d do vetor 2:\n",i);
        scanf("%d",&vetor_numeros_2[i]);
    }
    for(i=0;i<tam_vetor; i++){
        vetor_resultante[2*i]=vetor_numeros[i];
        vetor_resultante[2*i+1]=vetor_numeros_2[i];
    }
    printf("O vetor resultante e: ");
    for (i = 0; i < (tam_vetor*2); ++i) {
        printf("%d ",vetor_resultante[i]);
    }


    return 0;
}