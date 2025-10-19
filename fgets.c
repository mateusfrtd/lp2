#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *text;

	if((text = (char *) malloc(sizeof(char)*40)) == NULL){
		printf("Erro: Erro na alocação");
		return 1;
	}
	 
	fgets(text, 40, stdin);
	printf("%s", text);
	
	free(text);
	return 0;
}
