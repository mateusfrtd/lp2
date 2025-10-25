#include <stdio.h>

int main(void)
{
	int a, b, m;
	printf("Entre com o primeiro valor(inteiro): ");
	scanf("%d", &a);
	printf("Entre com o segundo valor(inteiro): ");
	scanf("%d", &b);
	m = a>b ? a : b;
	printf("O maior: %d\n", m);
	
	return 0;
}

