#include <stdio.h>

int main(void)
{
	int num;
	printf("Entre com um inteiro: ");
	scanf("%d", &num);

	if ((num%3==0) && (num%5==0)) {
		printf("numero valido\n");
	} else {
		printf("numero invalido\n");
	}
	return 0;
}

