#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro;
    float real;
    int *ponteiro_inteiro;
    float *ponteiro_real;

    printf("===============================\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("===============================\n");
    printf("Digite um numero real: ");
    scanf("%f", &real);
    printf("===============================\n");

    ponteiro_inteiro=&inteiro;
    ponteiro_real=&real;

    printf("A variavel do tipo Int possui %d bytes \nSeu valor eh: %d\nSeu endereco eh: %d\n", sizeof(inteiro),inteiro, &inteiro);
    printf("===============================\n");
    printf("A variavel do tipo Float possui %d bytes \nSeu valor eh: %.3f\nSeu endereco eh: %d\n", sizeof(real),real, &real);
    printf("\n\n===============================\n");
    
    
	printf("===========PONTEIROS===========\n");
	printf("===============================\n");
    printf("A variavel do tipo Ponteiro para Inteiro possui %d bytes \nSeu valor eh: %d\nSeu endereco eh %d:\n", sizeof(*ponteiro_inteiro),*ponteiro_inteiro, &ponteiro_inteiro); 
	//'*' para valor '&' manipular a variavel (sem operações), ou seja, atribuir seu valor a outra) 
    printf("===============================\n");
    printf("A variavel do tipo Ponteiro para Real possui %d bytes \nSeu valor eh: %.3f\nSeu endereco eh %d:\n", sizeof(*ponteiro_real),*ponteiro_real, &ponteiro_real);

    printf("Bom dia!\n");
    return 0;
}
