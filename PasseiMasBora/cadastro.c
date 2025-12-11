#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tarefa {
	int id;
	char description[256];
	struct Tarefa *prox;
} Painel;

void opcoes();
void registrar(Painel *cabeca);
void listar(Painel *cabeca);
void remover(Painel *cabeca);

int main(void) {
	int op;
	int wflag = 1;
	Painel *cabeca = (Painel *) malloc(sizeof(Painel));
	cabeca->prox = NULL;
	
	opcoes();
	scanf("%d", &op);
	
	while(wflag) {
		switch(op) {
			case 1:
				listar(cabeca);
				break;
			case 2:
				registrar(cabeca);
				break;
			case 3:
				remover(cabeca);
				break;
			default:
				wflag = 0;
				break;
		}
	}

	return 0;
}

void opcoes() {
	printf("Escolha:\n\
 1- Listar\n\
 2- Registrar\n\
 3- Remover\n\
 *- Sair\n");
}

void registrar(Painel *cabeca) {
	Painel *novo = (Painel *) malloc(sizeof(Painel));
	static int id = 0;
	novo->id = id;
	printf("DescriÃÃ£o: ");
	fgets(novo->description, 255, stdin);
	novo->prox = NULL;

	Painel *aux = novo;
	while(aux != NULL) {
		aux = aux->prox;
	}
	aux = novo;
	id++;
}

void remover
