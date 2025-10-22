#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float j, m;
	printf("Valor em jardas: ");
	scanf("%f", &j);
	m = j*0.91;
	printf("Valor em metros: %f\n", m);

	return 0;
}
