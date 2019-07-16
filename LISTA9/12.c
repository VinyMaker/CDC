#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void preenche_matriz(int tamanho,int *ponteiro);
void exibe_matriz(int tamanho,int *ponteiro);

int main(){
	
	int N;
	printf("Digite o tamanho 'N' da matriz NxN:\t");
	scanf("%d",&N);
	
	int *matriz[N][N];
	int *ponteiro = &matriz[0][0];
	

	preenche_matriz(N,ponteiro);
	int i,j; //use para conferir a matriz digitada
	for(i=0; i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",*(ponteiro+i)+j);
		}
		printf("\n");
	}
	printf("\n==========\n");
	exibe_matriz(N,ponteiro);
	printf("\n==========\n");
	 //use para conferir a matriz digitada
	for(i=0; i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",*ponteiro);
			ponteiro++;
		}
		printf("\n");
	}


}
void preenche_matriz(int tamanho,int *ponteiro){
	int i,j;
	printf("\n Lendo a matriz: \n");
    for(i=0;i<tamanho;i++){
    	for(j=0;j<tamanho;j++){
        	scanf("%d",&ponteiro);
       		ponteiro++;
    	}
    }
    printf("\n==========\n");
}
void exibe_matriz(int tamanho,int *ponteiro){
	int i,j;	
	printf("\n Exibindo a matriz: \n");
    for(i=0;i<tamanho;i++){
    	for(j=0;j<tamanho;j++){
        	printf("%d ",*(ponteiro+i));
    	}
    	printf("\n");
    }
    printf("\n==========\n");
}
