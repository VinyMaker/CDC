#include <stdio.h>
#include <stdlib.h>


int main()
{
	float custofinal=0,custofabrica=0,taxatotal,impostos;

	printf("Digite o Custo de Fabrica do Veiculo:\n");
	scanf("%f",&custofabrica);
	
	printf("Digite a taxa (em porcentagem) de impostos:\n");
	scanf("%f",&impostos);

	impostos = impostos / 100;

	taxatotal = impostos;

	custofinal = custofabrica + (custofabrica * taxatotal);

	printf("O custo final ao cunsumidor sera de R$ %2.f e a taxa de impostos totais será de %f",custofinal,taxatotal);

return 0;
}
