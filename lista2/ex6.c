#include <stdio.h>

int main(void)
{
	float vi, vf;
	printf("Valor inicial: ");
	scanf("%f", &vi);
	vf = vi-(vi*12/100);
	printf("Valor final: %f\n", vf);
	return 0;
}
