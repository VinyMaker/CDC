#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(){
float vet[6] = {1.1,2.2,3.3,4.4,5.5,6.6};
float *ponteiro_vetor;
int i;
ponteiro_vetor = vet;

printf("contador/valor/valor");
for(i = 0 ; i < 6 ; i++){
	//*(ponteiro_vetor+i)"+="2; operacao a ser realizada
	printf("\ni = %d\t",i);
	printf(" vet[%d] = %.1f\t",i, vet[i]);
	printf(" *(f + %d) = %.1f\t",i, *(ponteiro_vetor+i));

}

    return 0;
}

