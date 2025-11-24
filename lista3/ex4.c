#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, r;
	printf("Entre com 2 inteiros: ");
	scanf("%d %d", &num1, &num2);
	while(num2 != 0) {
		r = num1%num2;
		num1 = num2;
		num2 = r;
	}
	printf("mdc: %d\n", num1);

	return 0;
}

