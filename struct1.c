#include <stdio.h>
#include <stdlib.h>

typedef struct No {
	int v;
	struct No *proximo;
} Node;

Node* cria_no(int valor);
Node* insere_inicio(Node* p, int valor);
Node* insere_fim(Node *p, int valor);

Node* insere_fim(Node *p, int valor){
	Node *n = cria_no(valor);

	Node *aux = p;
	while(aux->proximo != NULL) {
		aux = aux->proximo;
	}

	aux->proximo = n;
	return p;
}

Node* insere_inicio(Node* p, int valor) {
	Node* n = cria_no(valor);
	n->proximo = p;
}

Node* cria_no(int valor) {
	Node *p = (malloc(sizeof(Node)));

	p->v = valor;
	p->proximo = NULL;
	return p;
}

int main(void){
	Node *l = cria_no(10);
	
	l = insere_fim(l, 20);
	l = insere_fim(l, 30);


	Node *aux = l;
	while(aux != NULL) {
		printf("%d -> ", aux->v);
		aux = aux->proximo;
	}
	printf("NULL\n");
	return 0;
}
