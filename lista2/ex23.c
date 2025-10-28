#include <stdio.h>

int main(void)
{
	int num, cont;
	cont = 0;
	num = 1;
	while(cont<5) {
		if (num%3==0) {
			printf("%d, ", num);
			cont++;
		}
		num++;
	}
	printf("\n");
}
