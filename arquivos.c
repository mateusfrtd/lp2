#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char *a = malloc(sizeof(char)*1024);
	size_t b = 0;
	int linha;
	int qtd=0;
	char fn[1024] = "muguetsafadinha"; // file name
	
	if(fp = fopen(fn, "r")==NULL) {
		printf("Arquivo não existe\n");
		return 0;
	}

	while((linha=getline(&a, &b, fp)) != -1) {
		printf("%s", a);
		qtd++;
	}
	printf("%d linhas\n", qtd);
	return 0;
}
