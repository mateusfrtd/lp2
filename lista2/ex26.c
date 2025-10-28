#include <stdio.h>

int main(void)
{
	int num, s;
	for(int i=0; i<10; i++) {
		printf("Entre com um inteiro: ");
		scanf("%d", &num);
		s += num;
	}
	printf("Soma: %d\n", s);
	return 0;
}
