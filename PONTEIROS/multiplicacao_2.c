#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n,*a,multiplica;
	scanf("%d",&n);
	printf("x\n");
	scanf("%d",&multiplica);

	a = &n;
	(*a)*=multiplica;

	printf("= %d",*a);

    return 0;
}

