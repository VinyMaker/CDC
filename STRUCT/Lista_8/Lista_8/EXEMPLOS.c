    #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>	
   
   struct suaEstrutura{
      char exemplo[50];

    };


    int main(){

    FILE *arquivo;
    struct suaEstrutura p;

    arquivo = fopen("seuDiretorio.txt", "a+");

    printf("\ninforme seu exemplo: ");
    gets(p.exemplo);

    //Realizando escrita do tamanho de uma estrutura...
    fprintf(arquivo, &p);

    //explicando o que ta rolando no fwrite: 
    //ele atribui no arquivo, o endereço de p "com os dados", com o tamanho de p, e o contador.
    fclose(arquivo);



    }
