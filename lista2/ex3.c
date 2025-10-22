#include <stdio.h>

int main(void)
{
	float ld, a;
	printf("Lado do quadrado: ");
	scanf("%f", &ld);
	a = ld*ld;
	printf("Area: %.2f\n", a);

	return 0;
}
