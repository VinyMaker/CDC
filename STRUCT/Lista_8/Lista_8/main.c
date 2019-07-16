#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>


int main()
{
    int n1,n2;
    char op;
    int resultado;

    //N1 OP N2 = RESULTADO;



    FILE *calculadora;
    calculadora = fopen("calculadora.txt","a+");


    if(calculadora == NULL){
        printf("Nao foi possivel abrir o arquivo\n");
        return 0;
    }
    else{
        while(calculadora!=eof(){
        	fscanf(calculadora,"%d %c %d = %d\n",&n1,&op,&n2,&resultado);
            printf("%d %c %d = %d\n",n1,op,n2,resultado);
            getlie
            calculadora++;

        }
    }

    //calcula(n1,op,n2);
	fclose(calculadora);
    printf("\n================================\n");
    printf("Bom dia!\n");
    return 0;
}
