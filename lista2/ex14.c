#include <stdio.h>

int main(void)
{
	float peso, alt;
	char sexo;

	printf("Voce é homem ou mulher?(h/m) ");
	scanf("%c", &sexo);

	printf("Sua altura: ");
	scanf("%f", &alt);

	switch (sexo) {
		case 'h':
			peso = (72.7 * alt) - 58;
			break;
		case 'm':
			peso = (62.1 * alt) - 44.7;
			break;
		default:
			printf("Opção invalida.");
	}

	printf("O peso ideal é %f\n", peso);
	return 0;
}
			
