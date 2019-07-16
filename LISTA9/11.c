#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int transforma_segundos(int hora,int minuto, int segundo);

int main(){
	int hora,minuto,segundo,segundos_totais;
	printf("Digite a hora: (hh:mm:ss):\t");
	scanf("%d:%d:%d",&hora,&minuto,&segundo);
	
	segundos_totais = transforma_segundos(hora,minuto,segundo);
	
	exibe_segundos(hora,minuto,segundo,segundos_totais);
	
	
}


int transforma_segundos(int hora,int minuto, int segundo){
	int segundos=0;
	segundos += segundo;
	segundos += hora*3600;
	segundos += minuto*60;
	return segundos;
	}

void exibe_segundos(int hora, int minuto, int segundo,int segundos_totais){
	printf("%dh%dmin%dseg = %d segundos",hora,minuto,segundo,segundos_totais);
}
