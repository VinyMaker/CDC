#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,soma=0;
    printf("Entre com o primeiro numero:");
    scanf("%d",&num1);
    printf("Entre com o segundo numero:");
    scanf("%d",&num2);
    printf("Entre com o terceiro numero:");
    scanf("%d",&num3);

    soma = num2 + num3;

    if (num1 > soma){
        printf("O primeiro numero\n é maior que a soma dos \noutros dois numeros\n");
    }
    return 0;
}
