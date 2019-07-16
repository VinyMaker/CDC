#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int categoria(int idade);

int main(){
	int idade;
	printf("Digite a idade do nadador: ");
	scanf("%d",&idade);
	categoria(idade);	

	return 0;
}

int categoria(int idade){
    if(idade >= 5 && idade <= 7){
        printf("Infantil A \t\n");
    }
    else if(idade >= 8 && idade <= 10){
        printf("Infantil B \t\n");
    }
    else if(idade >= 11 && idade <= 13){
        printf("Juvenil A \t\n");
    }
    else if(idade >= 14 && idade <= 17){
        printf("Juvenil B \t\n");
    }
    else if(idade >= 18){
        printf("Adulto \t\n");
    }
    else{
    	printf("Nao categorizado: \t\n");       
    }

}
