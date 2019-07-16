#include <stdio.h>
#include <stdlib.h>


int main()
{
	float valormaximo,salariobruto,prestacao;
	
	printf("Digite o salario e a prestaçao desejada:\n");
	scanf("%f %f", &salariobruto,&prestacao);
	
	valormaximo = salariobruto * (0.3);
	
	if (valormaximo >= prestacao){
		printf("Emprestimo Pode Ser Concedido");
		}
	else{
		printf("Emprestimo Negado");
	}
return 0;
}
