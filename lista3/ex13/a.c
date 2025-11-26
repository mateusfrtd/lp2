#include <stdio.h>
#include "projeto_experimental.h"
#include "a.h"
#include "b.h"
#include "c.h"
#include "d.h"
#include "e.h"
#include "funcoes.h"

void funcao_A() { printf("Funcao A executada\n"); }

int main() {
    printf("--- Iniciando Projeto Experimental ---\n");
    funcao_A();
    funcao_B();
    funcao_C();
    funcao_D();
    funcao_E();
    return 0;
}
