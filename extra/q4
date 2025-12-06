#include <stdio.h>

void converter(int num, int base) {
    char resultado[65];
    int i = 0;
    int n = num;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (n > 0) {
        int resto = n % base;
        if (resto < 10)
            resultado[i++] = '0' + resto;
        else
            resultado[i++] = 'A' + (resto - 10);
        n /= base;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", resultado[j]);
    }
    printf("\n");
}

int main(void) {
    int num, opcao;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Escolha a base para conversao:\n");
    printf("1 binario\n");
    printf("2 octal\n");
    printf("3 hexadecimal\n");
    printf("ecsolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("bim: ");
            converter(num, 2);
            break;
        case 2:
            printf("octal: ");
            converter(num, 8);
            break;
        case 3:
            printf("hxa: ");
            converter(num, 16);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
