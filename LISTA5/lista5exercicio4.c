#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int quant_triangulos=2,i=0;
	float base[quant_triangulos],altura[quant_triangulos],area[quant_triangulos];

	printf("==============================================\n");
	printf("PROGRAMA PARA CALCULAR A AREA DE %d TRIANGULOS\n",quant_triangulos);
	printf("==============================================\n");
	
	while(i>=0){
		printf("Digite a base do triangulo %d: ",(i));
		scanf("%f", &base[i]);
		printf("Digite a altura do triangulo %d: ",(i));
		scanf("%f", &altura[i]);
		area[i] = base[i] * (altura[i]/2);
		printf("================================\n");
		i=i+1;
		
	}
	printf("================================\n");
	for(i=0;i<quant_triangulos;i++){
		printf("A area do triangulo %d e de %.2f",(i+1),area[i]);
		printf("\n================================\n");	
	}
	return 0;
}
