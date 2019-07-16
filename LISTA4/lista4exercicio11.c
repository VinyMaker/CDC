#include <stdio.h>
#include <stdlib.h>


int main()
{

	int numeros[200],quantidadepares=0,quantidadeimpares=0,i;

	for(i=0;i<=199;i++){
	scanf("%d",&numeros[i]);
	if (numeros[i]%2==0){
		quantidadepares++;
	}
	else{
		quantidadeimpares++;
	}
}
	printf("Foram digitados %d numero(s) par(es) e %d numero(s) impar(es)",quantidadepares,quantidadeimpares);

return 0;
}
