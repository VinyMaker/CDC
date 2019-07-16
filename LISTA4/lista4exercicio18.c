#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i=1,j,m,n=0;
	
	printf("Digite dois valores, (X mod Y), para verificar a congruencia:\n");
	scanf("%d %d",&j,&m);
	
	while(n!=10){
		if (i%m==j%m){
			printf("%d e congruente modulo\n",i);
			n++;
			i++;
		}
		else{
			i++;
		}
	}
	
return 0;
}
