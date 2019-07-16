#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int N;
    printf("Digite a quantidade de livros a serem lidos:\n");
    scanf("%d",&N);

    struct dados{
        char titulo[30];
        char autor[15];
        int ano;
    };

    struct dados livros[N];
    int i;

    for(i=0;i<N;i++){
        printf("\n---------- Ficha de livro: Livro %d -----------\n\n",i+1);

        printf("Titulo do livro %d......: ",i+1);
        getchar();
        fgets(livros[i].titulo, 30, stdin);

        printf("Autor do livro %d......: ",i+1);
        fgets(livros[i].autor, 15, stdin);

        printf("Ano de publicacao.......: ");
        scanf("%d",&livros[i].ano);
    }
    printf("\n======Leitura Concluida=====\n");
	char busca[2];
	char busca_livro[30];

	printf("Digite 's' para buscar um livro:   ");
	scanf("%s", &busca[0]);
	printf("\n========Busca Iniciada========\n");
	

	int posicao_livro,livros_encontrados=0;
	if(busca[0]=='s'){
        while(busca[0]=='s'){
        	printf("\n==========================================\n");
            printf("Digite um titulo para buscar as informacoes:  ");
            getchar();
            fgets(busca_livro, 30, stdin);
            for(i=0;i<N;i++){
                if(strcmp(livros[i].titulo,busca_livro)==0){
                    posicao_livro=i;
                    livros_encontrados++;
                    printf("Livro encontrado:\n");
                    printf("Titulo ...........:  %s \n", livros[posicao_livro].titulo);
                    printf("Autor ............:  %s \n", livros[posicao_livro].autor);
                    printf("Ano ..............:  %d \n" ,livros[posicao_livro].ano);
                    printf("\n======================\n");
                }   	
	        }
	        if(livros_encontrados==0){
	        	printf("Nenhum livro encontrado, digite 's' para fazer outra busca:  ");
            	scanf("%s",&busca[0]);
            	printf("\n===========================\n");
			}
			else{
            	printf("Livro encontrado, digite 's' para fazer outra busca:   ");
            	scanf("%s",&busca[0]);
            	printf("\n===========================\n");
        	}
        }
    }
    else{
    	printf("\n========Busca Encerrada========\n");
    }

    return 0;
}
