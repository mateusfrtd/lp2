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
	printf("FaÃa o primeiro registro para iniciar!\n");
	printf("DescriÃÃo: ");
	cabeca->id = 0;
	fgets(cabeca->description, 255, stdin);
	
	while(wflag) {
		opcoes();
		scanf("%d", &op);
		getchar();
		switch(op) {
			case 1:
				listar(cabeca);
				break;
			case 2:
				registrar(cabeca);
				break;
			case 3:
				printf("Funcionabilidade em desenvolvimento...\n");
				//remover(cabeca);
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
	static int id = 1;
	novo->id = id;
	printf("DescriÃÃ£o: ");
	fgets(novo->description, 255, stdin);
	novo->prox = NULL;

	Painel *aux = cabeca;
	while(aux->prox != NULL) {
		aux = aux->prox;
	}
	aux->prox = novo;
	id++;
}

void listar(Painel *cabeca) {
	Painel *aux = cabeca;
	
	while(aux != NULL) {
		printf("Task\n\
 Id: %d \n\
 DescriÃÃo: %s\n\n", aux->id, aux->description);
	aux = aux->prox;
	}
}
