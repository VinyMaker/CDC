#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int quant_pessoas=10,i;
	int idades[quant_pessoas],media=0;
	printf("================\n");
	printf("Media Estatutaria:\nDigite a Idade de %d pessoas:\n",quant_pessoas);
	printf("================\n");

    for(i=0;i<10;i++){
        printf("Digite a idade da pessoa %d: ",(i+1));
        scanf("%d",&idades[i]);
        media += idades[i];
    }
    printf("A Media Estatutaria é de %d",media/quant_pessoas);
    }
