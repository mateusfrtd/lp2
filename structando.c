#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data{
	int dia;
	int mes;
	int ano;
};

struct Paciente{
	char nome[40];
	struct Data nasc;
	char tel[11];

};

void showMenu(void)
{
	printf("\n----------------------------\nEscolha a opção:\n1- Cadastrar um novo paciente\n2- Mostrar pacientes cadastrados\n3- Remover paciente cadastrado\n0- Sair\n----------------------------\n");	

};

void _register(struct Paciente *pacientes, int idx)
{	
	printf("Nome: ");
	fgets(pacientes[idx].nome, 40, stdin);
	pacientes[idx].nome[strcspn(pacientes[idx].nome, "\n")] = '\0';

	printf("Data de nascimento(separado por espaços): ");
	scanf("%d %d %d", &pacientes[idx].nasc.dia,  &pacientes[idx].nasc.mes,  &pacientes[idx].nasc.ano);
	getchar();

	printf("Telefone: ");
	fgets(pacientes[idx].tel, 11, stdin);
	pacientes[idx].tel[strcspn(pacientes[idx].tel, "\n")] = '\0';

	printf("\n----------------------------\nAdicionado\nID: %d\n%s - %d/%d/%d\n   Tel: %s\n\n----------------------------\n", idx, pacientes[idx].nome, pacientes[idx].nasc.dia, pacientes[idx].nasc.mes, pacientes[idx].nasc.ano, pacientes[idx].tel);
	getchar();
};

void delete(struct Paciente *pacientes)
{	
	int p;
	printf("Qual paciente remover(ID): ");
	scanf("%d", &p);
	getchar();
	char name[40];
	strcpy(name, pacientes[p].nome);
	pacientes[p].nome[0] = '\0';
	pacientes[p].tel[0] = '\0';
	pacientes[p].nasc.dia = 0;
	pacientes[p].nasc.mes = 0;
	pacientes[p].nasc.ano = 0;
	printf("\n----------------------------\nO paciente %s foi removido.\n----------------------------\n", name);
};
	
void showPatients(struct Paciente *pacientes, int idx)
{
	for(int j=0; j<idx; j++){
		printf("\n----------------------------\nID: %d\n%s - %d/%d/%d\n   Tel: %s\n----------------------------\n", j, pacientes[j].nome, pacientes[j].nasc.dia, pacientes[j].nasc.mes, pacientes[j].nasc.ano, pacientes[j].tel);
	}
};

int main(void)
{
	struct Paciente pacientes[100];
	int op, idx, c;
	idx = 0;

	while(1){
		showMenu();
		scanf("%d", &op);
		getchar();

		switch (op){
			case 1:
				_register(pacientes, idx);
			while ((c = getchar()) != '\n' && c != EOF);
				idx++;
				break;
			case 2:
				showPatients(pacientes, idx);
				break;
			case 3:
				delete(pacientes);
				break;
			case 0:
				printf("Encerrando\n");
				return 0;
			default:
				printf("Opção invalida.\n");
		}
	}
	return 0;
};
