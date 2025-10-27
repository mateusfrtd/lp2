#include <stdio.h>

int main(void)
{
	int dia, mes, ano;
	int v[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("entre com a data separado por espacos: ");
	scanf("%d %d %d", &dia, &mes, &ano);

	if ((ano%400==0) || ((ano%100!=0)&&(ano%4==0))) {
		v[1] += 1;
	}

	if ((mes<0 || mes>13)) {
		printf("Mes invalido\n");
		return 0;
	}

	if (!(dia<=v[mes-1])&&(dia>0)){
		printf("Dia invalido\n");
		return 0;
	}

	printf("Data valida\n");
	return 0;
}
