#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[50]; int qtd=0; char c;
	printf("Entre com uma string: ");
	fgets(str, 49, stdin);
	while (str[qtd]!='\0') {
		qtd++;
	}
	printf("%d\n", qtd-1);
	return 0;
		

}
