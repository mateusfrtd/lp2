#include <stdio.h>

int main(void) 
{
	int ini, fin, imp, par;
	printf("Entre com o valor inicial e o valor final nessa ordem: ");
	scanf("%d %d", &ini, &fin);
	if (ini>=fin) {
		printf("Limite invalido\n");
		return 0;
	}

	for(int i = ini; i<=fin; i++) {
		if(i%2==0) {
			par++;
		} else {
			imp++;
		}
	}

	printf("Par: %d\nImpar: %d\n", par, imp);
	return 0;
}
