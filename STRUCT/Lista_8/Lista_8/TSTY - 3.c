#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
int tamanho=10;
int vet[10] = {1,2,3,4,5,6,7,8,9,10};
int *ponteiro_vetor;
int i;
ponteiro_vetor = &vet[0];


for(i = 0 ; i < tamanho/2 ; i++){
	
	*(ponteiro_vetor+i) ^= *(ponteiro_vetor+tamanho-i-1);
	*(ponteiro_vetor+tamanho-i-1) ^= *(ponteiro_vetor+i);
	*(ponteiro_vetor+i) ^= *(ponteiro_vetor+tamanho-i-1);
}

for(i = 0 ; i < tamanho ; i++){
	printf(" vet[%d] = %d\n",i, vet[i]);
}
    return 0;
}
