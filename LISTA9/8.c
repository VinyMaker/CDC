#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float peso_ideal(float altura,char sexo);

int main(){
	float alt;
	char sexo;
	float resultado_peso_ideal;
	printf("Digite a altura: ");
	scanf("%f",&alt);
	printf("Digite o sexo: ");
	scanf("%s",&sexo);
	
	resultado_peso_ideal = peso_ideal(alt,sexo);	
	printf("\n O peso ideal sera de %.3f\t\n",resultado_peso_ideal);
	
}


float peso_ideal(float altura,char sexo){
	if(sexo=='feminino' || sexo =='f'){
		return (62.1 * altura)-44.7;
	}
	else if(sexo=='masculino' || sexo =='m'){
		return (72.7 * altura)-58;
	}
}
