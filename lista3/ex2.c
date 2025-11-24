#include <stdio.h>
#include <stdlib.h>

int f(int num) {
	int primo = 1;
	for (int i=2; i<num; i++) {
		if (num%i==0) {
			primo = 0;
		}
	}
	return primo;
}

int w(int num) {
	int primo = 1; int i = 2;
	while (i<num) {
		if (num%i==0) {
			primo = 0;
		}
		i++;
	}
	return primo;
}

int d(int num) {
	int primo = 1; int i = 2;
	do {
		if (num%i==0) {
			primo = 0;
		}
		i++;
	} while (i<num);

	return primo;
}

int main(void) {
	int num;
	printf("Entre com um inteiro: ");
	scanf("%d", &num);
	printf("Com for: %d\n", f(num)); 
	printf("Com while: %d\n", w(num));
	printf("Com do while: %d\n", d(num));
	return 0;
}
