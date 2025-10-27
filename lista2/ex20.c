#include <stdio.h>

int main(void)
{
	int km, l;
	printf("entre com o km e os litros nessa ordem: ");
	scanf(" %d %d", &km, &l);

	if (km/l<8) {
		printf("Beberrão! Troque de carro!\n");
	} else if (km/l<14) {
		printf("Economico!\n");
	} else if (km/l>=14) {
		printf("Super economico\n");
	}
	return 0;
}
