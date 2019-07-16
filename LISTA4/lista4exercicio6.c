#include <stdio.h>
#include <stdlib.h>


int main()
{
	int velocidadepermitida,velocidademotorista,velocidadeultrapassada=0,multa=0;

	printf("Digite a velocidade maxima permitida:\n");
	scanf("%d",&velocidadepermitida);
	printf("Digite a velocidade do condutor:\n");
	scanf("%d",&velocidademotorista);

	velocidadeultrapassada = velocidademotorista - velocidadepermitida;

	if (10 >= velocidadeultrapassada > 0){
		multa = 50;
}
	else if (11 <= velocidadeultrapassada <= 30){
		multa = 100;
}
	else if(velocidadeultrapassada > 30){
		multa = 200;
}
	if (velocidadeultrapassada > 0){
		
	printf("A multa a ser paga sera de %d por ultrapassar %d da velocidade permitida.", multa,velocidadeultrapassada);
}
	else{
		printf("Não havera multa");
	}
return 0;
}
