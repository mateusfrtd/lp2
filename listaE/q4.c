#include <stdio.h>
#include <stdlib.h>

void bin(int n);

int main(void) {
	
	int num, op;
	printf("Entre com o valor a ser transformado: ");
	scanf("%d", &num);

	printf("escolha: 1-bin 2-oct 3-hex");
	scanf("%d", &op);

	switch(op) {
		case 1:
			bin(num);
			break;
		case 2:
			printf("%o", num);
			break;
		case 3:
			printf("%x", num);
			break;
		default:
			printf("Invalido");
	}
	printf("\n");

	return 0;
}

void bin(int n) {
	int v[32];
	int i=0;
	while(n>0) {
		v[i] = n%2;
		n/=2;
		i++;
	}

	for (int j = i-1; j>=0; j--) {
		printf("%d", v[j]);
	}
}
