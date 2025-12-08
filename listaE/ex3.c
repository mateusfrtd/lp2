#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int valor;
	struct No *prox;
} Node;

void inserir(Node *prox, int v);
int main(void);

int main(void) {
	int num;
	Node *lista=malloc(sizeof(Node));
	printf("entre com o valor: ");
	scanf("%d", &num);
	lista->prox = NULL;
	lista->valor = num;

	while (num>=0) {
		printf("entre com valor: ");
		scanf("%d", &num);
		if (num>=0) inserir(lista, num);
	}

	int maior = lista->valor;
	int menor = lista->valor;
	int elementos = 0;
	int soma=0;
	int prodP = 1;
	int somaI=0;
	int a;
	Node *aux = lista;

	while(aux != NULL) {
		a = aux->valor;
		if (maior<a) maior = a;
		if (menor>a) menor = a;
		soma += a;
		elementos++;
		if(a%2) {
			somaI += a;
		} else {
			prodP *= a;
		}
		aux = aux->prox;
	}
	printf("maior: %d\n", maior);
	printf("menor: %d\n", menor);
	printf("media: %f\n", (float)soma/elementos);
	printf("produto pares: %d\n", prodP);
	printf("soma Impares: %d\n", somaI);

	while(lista != NULL) {
		aux = lista;
		lista = lista->prox;
		free(aux);
	}


	
}



void inserir(Node *prox, int v) {
	Node *novo = (Node *) malloc(sizeof(Node));
	novo->prox = NULL;
	novo->valor = v;

	if(prox == NULL) {
		prox = novo;
		return;
	}

	Node *aux = prox;
	while (aux->prox != NULL) {
		aux = aux->prox;
	}

	aux->prox = novo;
}


