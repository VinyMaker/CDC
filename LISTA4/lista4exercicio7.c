#include <stdio.h>
#include <stdlib.h>


int main()
{
	float salariominimo,salariousuario,quantossalarios;

	printf("Digite o valor do sal�rio minimo:\n");
	scanf("%f",&salariominimo);
	printf("Digite o valor do sal�rio do usu�rio:\n");
	scanf("%f",&salariousuario);

	quantossalarios = salariousuario / salariominimo;

	printf("O usu�rio ganha %.1f salario(s) minimo(s)",quantossalarios);
	
return 0;
}
