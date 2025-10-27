#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("Entre com os 3 valores: ");
	scanf("%d %d %d", &a, &b, &c);

	if ((a+b<c) || (a+c<b) || (b+c<a)) {
		printf("Não forma um triangulo.\n");
		return 0;
	}
	
	if ((a==b) && (a==c)) {
		printf("triangulo equilatero.\n");
	} else {
		if ((a!=c) && (a!=b) && (b!=c)) {
			printf("triangulo escaleno.\n");
		} else {
			printf("triangulo isosceles.\n");
		}
	
	}
	return 0;
}
