#include <stdio.h>

int main(void)
{
	float v, v1, v2, v3;
	v = 780000.00;
	v1 = v*46/100;
	v2 = v*32/100;
	v3 = v-(v1+v2);
	printf("Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f\n", v1, v2, v3);
	return 0;
}
