#include <stdio.h>

int main() {
    int tam_vetor=5; //tam_vetor representa o tamanho dos vetores
    float vetor_1[tam_vetor],vetor_2[tam_vetor],vetor_soma[tam_vetor]; 
	//serao lidos dois vetores com suas somas no terceiro vetor (vetor_soma)

    printf("===========================================\n");
    printf("Digite %d numero(s) para 2 vetores (A e B:)\n",tam_vetor);
	printf("===========================================\n");
	
	int i;
	printf("Vetor 1:\n");
	for(i=0;i<tam_vetor;i++){
		printf("Digite um numero para a posicao %d: ",i);
		scanf("%f",&vetor_1[i]);
	}
	printf("Vetor 2:\n");
	for(i=0;i<tam_vetor;i++){
		printf("Digite um numero para a posicao %d: ",i);
		scanf("%f",&vetor_2[i]);
	}
	for(i=0;i<tam_vetor;i++){
		vetor_soma[i]=(vetor_1[i]+vetor_2[i]);
	}
	printf("===========================================\n");
    printf("============OPERACAO CONCLUIDA=============\n");
	printf("===========================================\n");
	for(i=0;i<tam_vetor;i++){
		printf("A soma dos vetores eh: Vetor Soma[%d] = %.2f\n",i,vetor_soma[i]);
			
	}
	
	return 0;
}
