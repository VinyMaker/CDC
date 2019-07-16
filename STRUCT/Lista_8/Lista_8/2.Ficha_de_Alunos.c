#include <stdio.h>
#include <conio.h>  

  
int main(){
	/*Criar a struct */
  struct ficha_de_aluno{
    char nome[50];
    char matricula[30];
    float media_final;
  };

  int quant_alunos,i,j;
  printf("Informe a quantidade de alunos que terao seus dados colhidos: ");
  scanf("%d",&quant_alunos);
  
struct ficha_de_aluno aluno[quant_alunos];
struct ficha_de_aluno alunos_aprovados[quant_alunos];
struct ficha_de_aluno alunos_reprovados[quant_alunos];

int contador_aprovados=0;
int contador_reprovados=0;

for(i=0;i<quant_alunos;i++){
	printf("\n---------- Ficha de aluno: Aluno %d -----------\n\n",i+1);
	
	printf("Nome do aluno %d......: ",i+1);
	fflush(stdin);
	fgets(aluno[i].nome, 40, stdin);
	
	printf("Matricula ............: ");
	fflush(stdin);
	fgets(aluno[i].matricula, 20, stdin);
	
	printf("Informe a media final do aluno %d..:   ",i+1);
	scanf("%f", &aluno[i].media_final);
	if(aluno[i].media_final<5.00){
		alunos_reprovados[contador_reprovados]=aluno[i];
		contador_reprovados++;
	}
	else{
		alunos_aprovados[contador_aprovados]=aluno[i];
		contador_aprovados++;
	}
}
//contar quantos alunos foram aprovados e/ou reprovados antes de exibi-los

printf("\n\n --------- Confira abaixo os alunos aprovados ---------\n\n");	
for(i=0;i<contador_aprovados;i++){
	printf("\n\n --------- ALUNO %s ---------\n\n",alunos_aprovados[i].matricula);
	printf("Nome ...........:  %s", alunos_aprovados[i].nome);
	printf("Matricula ......:  %s", alunos_aprovados[i].matricula);
	printf("Media Final ....:  %.2f\n" , alunos_aprovados[i].media_final);
}

printf("\n\n --------- Confira abaixo os alunos reprovados ---------\n\n");	
for(j=0;j<contador_reprovados;j++){
	printf("\n\n --------- ALUNO %s ---------\n\n",alunos_reprovados[j].matricula);
	printf("Nome ...........:  %s", alunos_reprovados[j].nome);
	printf("Matricula ......:  %s", alunos_reprovados[j].matricula);
	printf("Media Final ....:  %.2f\n" , alunos_reprovados[j].media_final);
}
  getch();
  return(0);
}
