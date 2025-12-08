#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char nome[1024];

	printf("Qual seu nome? ");
	fgets(nome, 1024, stdin);
	printf("Ola, %s", nome);
	return 0;
}
