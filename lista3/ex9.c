#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int li, ls, primo, t, qtd;
	qtd = 0; t =0;
	printf("Entre com o limite inferior e o superior: ");
	scanf("%d %d", &li, &ls);
	int primos[ls];
	for (int i=li; i<ls;i++) {
		primo = 1;
		if (i<2) { primo = 0;}
		for(int j=2; j<i;j++) {
			if ((i%j==0 && i!=2)) {
				primo = 0;
				break;
			}
		}
		if (primo) {
			primos[qtd] = i;
			qtd++;
		}
	}
	for(int i=0; i<qtd; i++) {
		t += primos[i];
	}
	printf("%d\n", t);
	return 0;
}

