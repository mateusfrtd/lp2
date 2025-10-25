#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	printf("Entre numero para saber a raiz quadrada: ");
	scanf("%d", &n);
	if (n<0) {
		printf("Numero invalido.");
	} else {
		printf("%.2f\n", sqrt(n));
	}
	return 0;
}
