#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro;
    float real;
    char caractere;

    printf("Verificar Endereco e Tamanho de Variaveis:\n===============================\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro);
    printf("===============================\n");
    printf("Digite um numero real: ");
    scanf("%f", &real);
    printf("===============================\n");
    printf("Digite um caractere: ");
    scanf("%s", &caractere);
    printf("===============================\n\nResultado:\n\n");

    printf("A variavel do tipo Int possui %d bytes \nSeu endereco eh %d:\n", sizeof(inteiro), &inteiro);
    printf("===============================\n");
    printf("A variavel do tipo Float possui %d bytes \nSeu endereco eh %d:\n", sizeof(real), &real);
    printf("===============================\n");
    printf("A variavel do tipo Char possui %d bytes \nSeu endereco eh %d:\n", sizeof(caractere), &caractere);
    printf("===============================\n");

    printf("Bom dia!\n");
    return 0;
}
