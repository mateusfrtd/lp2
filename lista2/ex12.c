#include <stdio.h>

int main(void)
{
	float n1, n2, m;
	printf("Entre com a primeira nota: ");
	scanf("%f", &n1);
	if (n1<0 || n1>10) {
		printf("Nota invalida\n");
		return 1;
	}
	printf("Entre com a segunda nota: ");
	scanf("%f", &n2);
	if (n2<0 || n2>10) {
		printf("Nota invalida\n");
		return 1;
	}
	m = (n1+n2)/2;
	printf("media: %.2f\n", m);
	return 0;
}

