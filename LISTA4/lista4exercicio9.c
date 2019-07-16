#include <stdio.h>
#include <stdlib.h>


int main()
{
	float A,B;

	printf("Digite A e B para verificar se a divisao (A por B) e possivel:\n");
	printf("Digite A:");
	scanf("%f", &A);
	printf("Digite B:");
	scanf("%f", &B);
	while (B==0){
		printf("Divisao por 0 nao e possivel, digite novamente para verificar:");
		scanf("%f", &B);
}
	printf("A divisao A por B e possivel");
return 0;
}
