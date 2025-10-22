#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float r, v, d;
	printf("Digite o valor em real e em seguida a contação do dolar.\n");
	scanf("%f %f", &v, &d);
	r = v/d;
	printf("%f\n", r);
	
	return 0;
}
