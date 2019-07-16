#include <stdio.h>

int main() {
    int n; //variavel n representa o tamanho dos vetores
    float vetor_A[n],vetor_B[n],vetor_C[n],vetor_D[n],max,media=0; 
	//max eh o maior valor e media eh a media dos dois vetores
    printf("===========================================\n");
    printf("Digite o tamanho que deseja para os vetores (A e B):\n");
	scanf("%d",&n);
    printf("===========================================\n");
    printf("Digite %d numero(s) para 2 vetores (A e B:)\n",n);
	printf("===========================================\n");
	
	int i;
	printf("Vetor A:\n");
	for(i=0;i<n;i++){
		printf("Digite um numero para a posicao %d: ",i);
		scanf("%f",&vetor_A[i]);
	}
	printf("Vetor B:\n");
	for(i=0;i<n;i++){
		printf("Digite um numero para a posicao %d: ",i);
		scanf("%f",&vetor_B[i]);
	}
	for(i=0;i<n;i++){
		if(vetor_A[i]>vetor_B[i]){
			max=vetor_A[i];
			vetor_C[i]=max;
		}
		else if (vetor_B[i]>vetor_A[i]){
			max=vetor_B[i];
			vetor_C[i]=max;
		}
		else{
			vetor_C[i]=vetor_B[i]; //senao para tratar casos de vetor_A[i]==vetor_B[i]
		}
		vetor_D[i]=(vetor_A[i]+vetor_B[i])/2;
	}
	printf("===========================================\n");
    printf("============OPERACAO CONCLUIDA=============\n");
	printf("===========================================\n");
	for(i=0;i<n;i++){
		printf("Os novos vetores são: C[%d] = %.2f e D[%d] = %.2f\n",i,vetor_C[i],i,vetor_D[i]);
			
	}
	
	return 0;
}
