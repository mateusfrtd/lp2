#include <stdio.h>

int main(void)
{
	float c, l, p;
	printf("Digite (nessa sequencia) o comprimento, largura e o preco do metro da tela: ");
	scanf("%f %f %f", &c, &l, &p);
	printf("Valor de tela: %f\n", (((2*c)+(2*l))*p));
	return 0;
}
