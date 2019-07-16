#include <stdio.h>

int main() {
    int tam_vetor=6,i,cont_numeros_positivos=0,cont_numeros_negativos=0,cont_numeros_nulos=0; //tamanho do vetor e contador
    float numeros[tam_vetor]; //vetor de elementos inteiros

    printf("================================================================================\n");
    printf("Digite %d numeros para verificar quantos sao positivos e quantos sao negativos: \n",tam_vetor);
    printf("================================================================================\n");

    for(i=0;i<tam_vetor;i++){
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
        if (numeros[i]<0){
            cont_numeros_negativos++;
        }
        else if (numeros[i]>0){
            cont_numeros_positivos++;
        }
        else{
            cont_numeros_nulos++;
        }
    }
    printf("Foram encontrados %d numero(s) positivos.\n", cont_numeros_positivos);
    printf("Foram encontrados %d numero(s) negativos.\n",cont_numeros_negativos);
    printf("Foram encontrados %d numero(s) nulos (ou iguais a zero)\n",cont_numeros_nulos);

}