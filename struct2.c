#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int valor;
	struct No *prox ;
} Node;

Node* criar_no(int v);
Node *inserir_fim(Node *cabeca, int v);

Node* criar_no(int v) {
	Node *n = malloc(sizeof(Node));

	n->valor = v;
	n->prox = NULL;
	return n;
}

Node *inserir_fim(Node *cabeca, int v) {
	Node *n = criar_no(v);
	Node *aux;
	if (cabeca == NULL) {
		cabeca = criar_no(v);
		return cabeca;
	}

	aux = cabeca;
	while (aux->prox != NULL) {
		aux = aux->prox;
	}

	aux->prox = n;
	return cabeca;
}

int main(void) {
	Node *l = NULL;
	for(int i=0; i<10; i++) {
		l = inserir_fim(l, i);
	}

	Node *aux = l;
	while(aux != NULL) {
		printf("%d -> ", aux->valor);
		aux = aux->prox;
	}
	printf("\n");
	return 0;
}
