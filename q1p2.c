#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int valor;
	struct No *prox;
} Node;

void inserir(Node *prox, int v);

void inserir(Node *prox, int v) {
	Node *novo = (Node*) malloc(sizeof(Node));
	novo->valor = v;
	novo->prox = NULL;

	Node *aux = prox;

	while(aux->prox != NULL) {
		aux = aux->prox;
	}

	aux->prox = novo;
}

int main(void) {
	Node *lista = (Node*) malloc(sizeof(Node));
	int num, maior, menor, soma, somaI, prodP, qtd;
	printf("Entre com o valor: ");
	scanf("%d", &num);

	if(num<0) {
		printf("OK\n");
		return 0;
	}

	lista->valor = num;
	lista->prox = NULL;

	do {
		printf("Entre com outro valor: ");
		scanf("%d", &num);
		if(num>=0) inserir(lista, num);
	} while (num>=0);

	Node *aux = lista;
	maior = lista->valor;
	menor = lista->valor;
	soma = 0; somaI = 0; qtd = 0; prodP = 1;
	while (aux != NULL) {
		int n = aux->valor;
		printf("%d ", n);

		if(n>maior) maior = n;
		if(n<menor) menor = n;
		soma += n;
		qtd++;
		if(n%2) {
			somaI += n;
		} else {
			prodP *= n;
		}
		aux = aux->prox;
	}

	printf("\n");
	printf("maior:         %d\n", maior);
	printf("menor:         %d\n", menor);
	printf("media:	       %f\n", (float)soma/qtd);
	printf("produto pares: %d\n", prodP);
	printf("soma Impares:  %d\n", somaI);
	
	while (lista != NULL) {
		aux = lista->prox;
		free(lista);
		lista = aux;
	}

	return 0;
}
