#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float A;
	float B;
	float aux;
	scanf("%f", &A);
	scanf("%f", &B);
	
	aux= B;
	B = A;
	A = aux;
	
	printf("%.2f\n", A);
	printf("%2.f\n", B);
	return 0;
}
