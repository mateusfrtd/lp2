#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int li, ls, mult, qtd,t,n;
	qtd = 0;
	printf("Entre com o limite inferior e o superior: ");
	scanf("%d %d", &li, &ls);
	int mults[ls];
	printf("Entre o com N: ");
	scanf("%d", &n);
	for (int i=li; i<ls;i++) {
		mult = 0;
		if (i%n==0) {
			mult = 1;
		}
		
		if (mult) {
			mults[qtd] = i;
			qtd++;
		}
	}
	t=0;
	for(int i=0; i<qtd; i++) {
		t += mults[i];
	}
	printf("%d\n", t);
	return 0;
}


