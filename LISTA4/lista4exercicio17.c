#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n,fatorial=1,i;
	
	printf("Digite o numero para obter o fatorial: ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++){
		fatorial = fatorial + (fatorial*i);
	}
	printf("O fatorial de %d e %d",n,fatorial);
	
return 0;
}
