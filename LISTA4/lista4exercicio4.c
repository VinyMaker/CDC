#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comp,resultado;
    int opcao;
    printf("MENU\n~~~~~~~~~~~~~\nPolegadas: 1\nPes: 2\nJardas: 3\nMilha: 4\n~~~~~~~~~~~~~~\n");
    printf("Digite a opção escolhida:");
    scanf("%d",&opcao);

    printf("Digite o comprimento que será convertido:");
    scanf("%f",&comp);

    if(opcao==1){
        resultado=comp*((25.3995)/1000000);
    }
    if(opcao==2){
        resultado=comp*((12*25.3995)/1000000);
    }
    if(opcao==3){
        resultado=comp*((3*12*25.3995)/1000000);
    }
    if(opcao==4){
        resultado=comp*((1760*3*12*25.3995)/1000000);
    }
    printf("A medida convertida é %f km",resultado);

    return 0;
}
