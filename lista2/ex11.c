#include <stdio.h>

int main(void)
{
	int n;
	printf("Entre com o inteiro: ");
	scanf("%d", &n);
	if (n%2==1){
		printf("impar\n");
	} else {
		printf("par\n");
	}
	return 0;
}
