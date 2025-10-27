#include <stdio.h>

int main(void)
{
	int num, sum, aux;
	
	printf("Entre com um inteiro: ");
	scanf("%d", &num);

	while(num) {
		aux = num%10;
		sum += aux;
		num = num/10;
	}

	printf("%d\n", sum);
	return 0;
}
