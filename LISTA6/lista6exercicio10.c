#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int dia,mes,ano;
	printf("============================================\n");
	printf("Digite uma data para verificar sua validade:\n");
	printf("============================================\n");
	scanf("%d %d %d", &dia, &mes, &ano);
	printf("============================================\n");
	if (((ano > 0))  && ano % 4 == 0 &&  (ano % 400 == 0 || ano % 100 != 0)) { //verificar ano bissexto
		if (mes >= 1 && mes <= 12){ //verificar mes
			if (mes == 2){ //se em fevereiro
				if (dia >= 1 && dia <= 29){
					printf("Data Valida");
				}
				else{
					printf("Data invalida");
				}
			}
			else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){ //por padrao, tais meses tem 30 dias
				if (dia >= 1 && dia <= 30){
					printf("Data Valida");
				}
				else{
					printf("Data invalida");
				}
			}
			else if(mes == 1 || mes == 3 || mes == 5 || mes == 7){ //por padrão, tais meses tem 31 dias
				if(dia >=1 && dia <= 31){
					printf("Data Valida");
				}
				else{
					printf("Data invalida");
				}
			}
		}
		else{
			printf("Data invalida");
		}
	}
	else if(ano > 0){  //se nao for ano bissexto
		if (mes >= 1 && mes <= 12){ //se mes for valido			
			if(mes == 4 || mes == 6 || mes == 9 || mes == 11){ //por padrão, tais meses tem 30 dias
				if(dia >= 1 && dia <=30){ 
					printf("Data Valida");
				}
				else{
					printf("Data invalida");
				}
			}	
			else if(mes == 1 || mes == 3 || mes == 5 || mes == 7){ //por padrão, tais meses tem 31 dias
				if(dia >=1 && dia <= 31){
					printf("Data Valida");
				}
				else{
					printf("Data invalida");
				}
			}
			else if(mes == 2){ //nesse caso fereveiro tem 28 dias
				if (dia >= 1 && dia <= 28){
					printf("Data Valida");
				}
				else{
					printf("Data invalida");
				}
			}
		}
		else{
			printf("Data invalida");
		}
	}
	else{
		printf("Data invalida");
	}
	return 0;
}
