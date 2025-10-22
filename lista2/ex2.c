#include <stdio.h>

int main(void)
{
	int num;
	printf("Entre com um inteiro: ");
	scanf("%d", &num);
	printf("Antecessor: %d | Sucessor: %d\n", num-1, num+1);
	
	return 0;
}
