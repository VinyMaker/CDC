#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	double *ponteiro_A;
	double *ponteiro_B;
	double A;
	double B;
	double produto;

	printf("Valor de A:\t\t");
	scanf("%lf",&A);
	printf("\t   x\n");
	printf("Valor de B\t\t");
	scanf("%lf",&B);	
	
	ponteiro_A=&A;
	ponteiro_B=&B;
	
	produto= *ponteiro_A * (*ponteiro_B); //valor de A x Valor de B ou *ponteiro_A = *ponteiro_A * (*ponteiro_B)

	printf("\nProduto    =\t\t%lf",produto);
	printf("\nProduto    =\t\t%.2lf\n",produto);

	
	
    return 0;
}

