#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipodepao,quantidade;
    float valortotal,paodesal,paodedoce;
    paodesal=0.10;
    paodedoce=0.15;
    
	printf("CALCULAR O VALOR DA COMPRA\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Digite 1 para pao de sal\nDigite 2 para pao de doce\n~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    scanf("%d",&tipodepao);

    printf("Digite a quantidade comprada: ");
    scanf("%d",&quantidade);

    if (tipodepao==1){
        valortotal=quantidade*paodesal;
    }
    else if(tipodepao==2){
        valortotal=quantidade*paodedoce;
    }
    else{
        printf("Tipo de pao inexistente!");

    }

    printf("O valor da compra e de %.2f R$",valortotal);


    return 0;
}
