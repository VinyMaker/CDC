#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	double *ponteiro_A;
	double *ponteiro_B;
	
	double A;
	double B;
	
	double divisao;
	
    ponteiro_A = &A;
	ponteiro_B = &B;
	
	printf("Dividendo\t");
	scanf("%lf",&A);
	
	printf("Dividido por\t");
	scanf("%lf",&B);	
	
	
	
	divisao = (*ponteiro_A /=(*ponteiro_B));

	printf("\t\t");
	printf("%.2lf",divisao);

	
    return 0;
}

