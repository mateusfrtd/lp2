#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int valor;
	struct No *prox;
} Node;

Node *criar_no(int v);
void inserir_fim(Node *cabeca, int v);

int main(void) {
	Node *lista = (Node *) malloc(sizeof(Node));
	lista->prox = NULL;
	
	int v;
	printf("Entre com o primeiro valor: ");
	scanf("%d", &v);
	lista->valor = v;
	
	while (scanf("%d", &v)!= EOF) {
		inserir_fim(lista, v);
		printf("Adicionar valor: ");
	}
	Node *aux = lista;
	while(aux != NULL) {
		printf("%d ", aux->valor);
		aux = aux->prox;
	}
	printf("\n");

	return 0;
}

Node *criar_no(int v) {
	Node *novo = (Node*) malloc(sizeof(Node));

	novo->valor = v;
	novo->prox = NULL;

	return novo;
}

void inserir_fim(Node *cabeca, int v) {
	Node *novo = criar_no(v);
	Node *aux = cabeca;

	while(aux->prox != NULL) {
		aux = aux->prox;
	}

	aux->prox = novo;
}






