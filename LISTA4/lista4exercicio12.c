#include <stdio.h>
#include <stdlib.h>


int main()
{
	float A,B;
	printf("Digite A: ");
	scanf("%f",&A);
	printf("Digite B: ");
	scanf("%f",&B);
	
	A = A + B;
	B = A - B;
	A = A - B;
	
	printf("A: %2.f B: %2.f",A,B);
return 0;
}
