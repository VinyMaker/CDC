#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float capital,taxa,juros;
    printf("Entre com o capital inicial:");
    scanf("%f",&capital);
    printf("Escreva a taxa de juros:");
    scanf("%f",&juros);

    taxa = juros / 100;

    for (i=1;i<=12;i++){
        printf("O montante no mês %d é %.2f\n",i,capital);
        capital = capital +  (capital * taxa);

    }

    return 0;
}
