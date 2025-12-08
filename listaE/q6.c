#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	float media = 0;
	int qtd = 0;
	
	do {
		printf("Entre com um numero: ");
		scanf("%d", &num);
		if (num!=0){
			media += num;
			qtd++;
		}
	} while (num!=0);
	
	media = media/qtd;
	printf("%f\n", media);

	return 0;
}
