#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int N,i,j,inicio=1;
	
	//matriz ate N
	scanf("%d",&N);
	
	int matriz[N][N];
	
	int *p=&inicio; //buscar o valor de 'p' no endereco de inicio

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			matriz[i][j] = *p;
            *p += 1; //ou '++*p'; ou '*p = *p + 1';
		}
	}
	
	for(i=0; i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
    return 0;
}
