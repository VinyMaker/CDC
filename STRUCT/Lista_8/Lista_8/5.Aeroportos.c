#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int V=5; //voos
    int A=5; //aeroportos

    struct dados_voo{
        int origem;
        int destino
    };

    struct dados_voo voos[V];
    
    struct dados_aeroporto{
    	int chegadas;
    	int saidas;
	};
	
	struct dados_aeroporto aeroportos[A];
    
	int i;
	printf("======================================\n");
	printf("==========ORIGEM e DESTINO===========\n");
    for(i=0;i<V;i++){
        printf("Informe o aeroporto de origem....: VOO %d...:  ",i+1);
        scanf("%d", &voos[i].origem);
		printf("\nInforme o aeroporto de destino...: VOO %d...:  ",i+1);
		scanf("%d", &voos[i].destino); 
	
		
        while((voos[i].origem < 0 || voos[i].origem > A-1) || (voos[i].destino < 0 || voos[i].destino > A-1)){
			printf("O Destino e/ou Origem informados estao invalidos, informe novamente para o voo: VOO %d",i+1);
			printf("Informe, novamente, o aeroporto de origem....: VOO %d ",i+1);
        	scanf("%d", &voos[i].origem);
			printf("\nInforme, novamente, o aeroporto de destino...: VOO %d ",i+1);
			scanf("%d", &voos[i].destino);
			
		}
		printf("\nDados Gravados com sucesso!\n");
		printf("\n----------\n");
	}
	printf("Leitura Concluida!\n");
	
	printf("======================================\n");
	printf("==========CHEGADAS e SAIDAS===========\n");
	for(i=0;i<V;i++){
        printf("Informe a quantidade de chegadas do aeroporto....: AEROPORTO %d...:  ",i);
        scanf("%d", &aeroportos[i].chegadas);
		printf("\nInforme a quantidade de saidas do aeroporto....: AEROPORTO %d.....:  ",i);
        scanf("%d", &aeroportos[i].saidas);
        
        
        while(aeroportos[i].chegadas < 0 || aeroportos[i].chegadas < 0){
			printf("As Saidas ou Chegadas informados estao invalidas, informe novamente para o aeroporto: AEROPORTO %d\n",i);
			printf("Informe, novamente, a quantidade de chegadas do aeroporto....: AEROPORTO %d...:  ",i);
        	scanf("%d", &aeroportos[i].chegadas);
			printf("\nInforme, novamente, a quantidade de saidas do aeroporto....: AEROPORTO %d.....:  ",i);
        	scanf("%d", &aeroportos[i].saidas);
   
		}
		printf("\nDados Gravados com sucesso!\n");
		printf("\n----------\n");
	}
	printf("Leitura Concluida!\n");
	
	free(voos);
	free(aeroportos);
	
    return 0;
}
