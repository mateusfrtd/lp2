#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char *argv[])
{
    double temp;
    int *op[2];

    if (argc < 4) {
        printf("Erro: ta faltando coisa");
        return 1;
    }

    temp = atof(argv[1]);

    if (strcmp(argv[2], "mm") == 0) {
        temp = temp / 1000;
    } else if (strcmp(argv[2], "cm") == 0) {
        temp = temp / 100;
    } else if (strcmp(argv[2], "m") == 0) {
        temp = temp;
    } else if (strcmp(argv[2], "km") == 0) {
        temp = temp * 1000;
    } else {
        printf("Erro: Entrada invalida: %s", argv[2]);
        return 1;
    }

    if (strcmp(argv[3], "mm") == 0) {
        temp = temp * 1000;
    } else if (strcmp(argv[3], "cm") == 0) {
        temp = temp * 100;
    } else if (strcmp(argv[3], "m") == 0) {
        temp = temp;
    } else if (strcmp(argv[3], "km") == 0) {
        temp = temp / 1000;
    } else {
        printf("Erro: Entrada invalida: %s", argv[3]);
        return 1;
    }

    printf("%.2f\n", temp);
    return 0;
}
