#include <stdio.h>

int main() {
    int tam_vetor=10,numero_buscado=5; //numero para ser buscado e tamanho do vetor
    int numeros[tam_vetor],i,cont_numeros=0; //vetor de elementos inteiros

    printf("===============================================================\n");
    printf("Digite %d numeros INTEIROS para verificar quais sao iguais a 5: \n",tam_vetor);
    printf("===============================================================\n");

    for(i=0;i<tam_vetor;i++){
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
        if (numeros[i] == numero_buscado) {
            cont_numeros++;
        }
    }
    if(cont_numeros > 0) {
        printf("Foram encontrados %d numero(s) 5.\n", cont_numeros);
        for (i = 0; i < tam_vetor; i++) {
            if (numeros[i] == numero_buscado) {
                printf("Ha um numero %d na posicao %d do vetor.\n",numero_buscado, i);
            }
        }
    }
    else
        printf("Nao foram encontrados numeros %d no vetor.\n",numero_buscado);
    return 0;
}