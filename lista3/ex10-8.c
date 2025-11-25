#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int li, ls, mult, qtd, n;
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
	FILE *fp;
	fp = fopen("q10-8t", "a");
	for(int i=0; i<qtd; i++) {
		fprintf(fp,"%d ", mults[i]);
	}
	FILE *fp2;
	fp2 = fopen("q10-8b", "ab");
	for(int i=0; i<qtd; i++) {
		fprintf(fp2,"%d ", mults[i]);
	}
	printf("\n");
	return 0;
}


