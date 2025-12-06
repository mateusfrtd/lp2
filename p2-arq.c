#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *fp;
	char fn[100];

	printf("Nome do arquivo: ");
	fgets(fn, 99, stdin);
	fn[strcspn(fn, "\n")] = '\0';

	if((fopen(fn, "r")) != NULL) 
