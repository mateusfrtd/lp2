#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char pala[1024];
	char *palavra;
	int tam, palindrome;
	palindrome = 1;

	printf("Digite a palvra: ");
	fgets(pala, sizeof(pala), stdin);
	pala[strcspn(pala, "\n")] = '\0';

	tam = strlen(pala);
	palavra = (char *) malloc((tam+1) * sizeof(char));

	strcpy(palavra, pala);

	for(int i=0; i<tam/2; i++) {
		if(palavra[i] != palavra[tam-1-i]) {
			palindrome = 0;
			break;
		}
	}

	if (palindrome) {
		printf("palindrome\n");
	} else {
		printf("nao é palindorme\n");
	}
	return 0;
}
