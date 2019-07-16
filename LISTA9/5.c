#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float media(float valor1, float valor2,float valor3,char op[0]);

int main(){
	float nota1,nota2,nota3;
	float media_calculada;
	char op[2];
	printf("Digite a nota 1: ");
	scanf("%f",&nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f",&nota2);
	
	printf("Digite a nota 3: ");
	scanf("%f",&nota3);	
	
	printf("Digite A p/ (media aritmetica) ou P p/ (media ponderada): ");
	scanf("%s",&op[0]);
	
	media_calculada = media(nota1,nota2,nota3,op);
	
	printf("A media eh: %.2f",media_calculada);
	
	return 0;
}


float media(float valor1, float valor2, float valor3, char op[0]) {
    if (op[0]=='A'){
        return (valor1 + valor2 + valor3) / 3;
    } else if (op[0]=='P'){
        return (valor1*5 + valor2*3 + valor3*2) / 10;
    }
}
 
