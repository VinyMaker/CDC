#include <stdio.h>
#include <stdlib.h>


int main()
{
	int N,votos[N],i,candidato1=0,candidato2=0,candidato3=0,candidato4=0,nulos=0,brancos=0;
	float totalbrancosenulos=0.0,percentual=0.0;
	printf("Digite o numero de eleitores: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		printf("Eleitor numero %d, digite seu voto: ",i);
		scanf("%d",&votos[N]);
		if (votos[N]==1){
			candidato1++;
		}
		else if (votos[N]==2){
			candidato2++;
		}
		else if (votos[N]==3){
			candidato3++;
		}
		else if (votos[N]==4){
			candidato4++;
		}
		else if (votos[N]==5){
			nulos++;
			totalbrancosenulos++;
		}
		else if (votos[N]==6){
			brancos++;
			totalbrancosenulos++;
		}
		else{
			nulos++;
			totalbrancosenulos++;
		}
	}
	percentual = (totalbrancosenulos/N)*100;

	printf("O candidato 1 recebeu %d votos\n",candidato1);
	printf("O candidato 2 recebeu %d votos\n",candidato2);
	printf("O candidato 3 recebeu %d votos\n",candidato3);
	printf("O candidato 4 recebeu %d votos\n",candidato4);
	printf("Foram %d votos nulos\n",nulos);
	printf("Foram %d votos brancos\n",brancos);
	printf("São %.f por cento de votos brancos e nulos sobre o total\n",percentual);
	
return 0;
}
