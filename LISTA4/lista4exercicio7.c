#include <stdio.h>
#include <stdlib.h>


int main()
{
	float salariominimo,salariousuario,quantossalarios;

	printf("Digite o valor do salário minimo:\n");
	scanf("%f",&salariominimo);
	printf("Digite o valor do salário do usuário:\n");
	scanf("%f",&salariousuario);

	quantossalarios = salariousuario / salariominimo;

	printf("O usuário ganha %.1f salario(s) minimo(s)",quantossalarios);
	
return 0;
}
