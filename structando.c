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
	char tel[10];

};

void showMenu(void)
{
	printf("Escolha a opção:\n
		1- Cadastrar um novo paciente\n
		2- Mostrar pacientes cadastrados\n
		3- Remover paciente cadastrado\n");	

	return -1;
};

void _register(*pacientes)
{
	printf("Nome: ");
	

	return -1;
}

int main(void)
{
	struct Paciente *pacientes;
	int op, idx;	

	while(1){
		showMenu();
		scanf("%d", &op);

		switch (op){
			case 1:
				
		
		}
	
	
	
	}

	return 0;
}
