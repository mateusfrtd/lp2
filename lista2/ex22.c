#include <stdio.h> 

int main(void)
{
	float peso, alt, imc;
	printf("Entre com seu peso(kg) e sua altura(m) nessa ordem: ");
	scanf("%f %f", &peso, &alt);
	imc = peso/(alt*alt);
	if (imc<18.5) {
		printf("Abaixo do Peso\n");
	} else if (imc<25) {
		printf("Saudável\n");
	} else if (imc<30) {
		printf("Peso em excesso\n");
	} else if (imc<35) {
		printf("Obesidade Grau I\n");
	} else if (imc<40) {
		printf("Obesidade Grau II (severa)\n");
	} else {
		printf("Obesidade Grau III (mórbida)\n");
	}

	return 0;
}
