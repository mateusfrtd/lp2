#include <stdio.h>

int main(void)
{
	int n, primo;
	printf("Entre com um positivo primo: ");
	scanf("%d", &n);
	printf("Primos:\n-2\n");

	for(int i=3; i<=n; i++) {
		primo = 1;
		for(int j=2; j<i; j++) {
			if (i%j==0) {
				primo = 0;
			}
		}
		if (primo) {
			printf("-%d\n", i);
		}
	}
	return 0;
}
		
