#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int li, ls, primo, qtd;
	qtd = 0;
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
	FILE *fp;
	fp = fopen("q10-7t", "a"); 
	for(int i=0; i<qtd; i++) {
		fprintf(fp, "%d ", primos[i]);
	}
	FILE *fp2;
	fp2 = fopen("q10-7b", "ab"); 
	for(int i=0; i<qtd; i++) {
		fprintf(fp, "%d ", primos[i]);
	}
	printf("\n");
	return 0;
}


