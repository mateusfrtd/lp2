#include <stdio.h>
#define PI 3.14

int main(void)
{
	float r, g;
	printf("Angulo em graus: ");
	scanf("%f", &g);
	r = g * (PI/180);
	printf("Em radianos: %f\n", r);
	return 0;
}
