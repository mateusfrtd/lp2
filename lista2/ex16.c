#include <stdio.h>

int main(void)
{
	int num;
	printf("Digite um inteiro: ");
	scanf("%d", &num);

	if (num%3==0) {
		if (!(num%5==0)) {
			printf("Num valido.");
		} else {
			printf("Numero invalido");
		}
	} else {
		if (num%5==0) {
			printf("numero valido");
		} else {
			printf("numero invalido");
		}
	}
	printf("\n");
	return 0;
}
