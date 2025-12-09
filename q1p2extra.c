#include <stdio.h>
#include <stdlib.h>

// Criar uma funcao q recebe um vetor de float e seu tamanho e retorne a media. Mostre isso em um exemplo.

float cmedia(float vetor[], int tam) {
	float media, soma;
	soma = 0;
	
	for(int i=0; i<tam; i++) { 
		soma += vetor[i]; // soma = soma + vetor[i]
	}

	media = soma / tam;
	return media;
}


int main(void) {
	int tam;
	printf("Entre com o tamanho do vetor: ");
	scanf("%d", &tam);
	
	float v[tam];
	
	for (int i=0; i<tam; i++) {
		printf("Valor: ");
		scanf("%f", &v[i]);
	}

	float media = cmedia(v, tam);

	printf("media %f\n", media);

	return 0;	
}
