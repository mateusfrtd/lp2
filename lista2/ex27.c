#include <stdio.h>

int main(void)
{
	int n, ma, me;
	ma = 0;
	printf("Entre com um inteiro: ");
	scanf("%d", &n);
	ma = n;
	me = n;
	for(int i=0; i<9; i++) {
		printf("Entre com outro inteiro: ");
		scanf("%d", &n);
		if (n>ma) {
			ma = n;
		}

		if (n<me) {
			me = n;
		}
	}
	printf("Maior: %d | Menor: %d\n", ma, me);
	return 0;
}
