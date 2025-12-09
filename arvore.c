#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int altura;

	printf("entre com a alura: ");
	scanf("%d", &altura);

	if(altura>25 || altura<5) {
		printf("Altura errda\n");
		return 0;
	}



	for(int i=0; i<=altura-2; i++) {
		for(int j=0; j<(altura-i-1); j++) {
		       printf(" ");
		}
 		for(int k=0; k<((2*i)-1); k++) {
			printf("*");
		}
		printf("\n");
	}

	for (int l=0; l<(altura-2); l++) {
		printf(" ");
	}
	printf("|\n");
	
	for(int i=0; i<altura-3; i++) {
		printf(" ");
	}
	printf("___");
	printf("\n");


	return 0;
}	
