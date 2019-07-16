#include <stdio.h>

int main() {
    int vetor_A[6],soma=0;
    
    vetor_A[0] = 15;
    vetor_A[1] = 20;
    vetor_A[2] = 3;
    vetor_A[3] = 1;
    vetor_A[4] = 26;
    vetor_A[5] = 2;
    
	int i;
    for(i=0;i<6;i++){
    	soma+=vetor_A[i];
	}
    printf("========================================\n");
    printf("A soma dos elementos do vetor A eh de %d\n",soma);
    printf("========================================\n");

    return 0;
}
