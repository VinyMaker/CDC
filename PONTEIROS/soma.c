#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	int *ponteiro_A;
	int *ponteiro_B;
	int A;
	int B;
	int soma;
	
	ponteiro_A=&A;
	ponteiro_B=&B;
	
	scanf("%d",&A);

	scanf("%d",&B);

	
	soma = (*ponteiro_A) + (*ponteiro_B);
	
	printf("%d",soma);
	

    return 0;
}

