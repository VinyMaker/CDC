#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int idade(int ano,int mes, int dia);

int main(){
	int dias,meses,anos;
	int resultado;
	printf("Digite sua idade em dia, mes e ano: ");
	scanf("%d %d %d",&dias,&meses,&anos);
	
	resultado = idade(anos,meses,dias);
	
	printf("A idade em dias eh: %d",resultado);
	
	return 0;
}


int idade(int ano,int mes, int dia){
   	int idade_dia=0;
   	
	idade_dia += dia;
	idade_dia += mes*30;
	idade_dia += ano*365;
	
	return idade_dia;

}
 
