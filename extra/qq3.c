#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
} Node;

void inserir(Node *inic, int valor) {
    Node *novo = (Node *) malloc(sizeof(Node));
    novo->valor = valor;
    novo->prox = NULL;

    Node *aux = inic;
    while (aux->prox != NULL) {
        aux = aux->prox;
    }
    aux->prox = novo;
}

int main(void) {
    Node *lista = NULL;
    int num;

    printf("Entre com um número positivo (ou Ctrl+D para sair): ");
    if (scanf("%d", &num) == EOF) {
        return 0;
    }
    while (num < 0) {
        printf("Número inválido. Entre com um número positivo: ");
        if (scanf("%d", &num) == EOF) {
            return 0;
        }
    }

    lista = (Node *) malloc(sizeof(Node));
    lista->valor = num;
    lista->prox = NULL;

    while (1) {
        printf("Entre com um número positivo (ou Ctrl+D para sair): ");
        if (scanf("%d", &num) == EOF) {
            break;
        }
        if (num < 0) continue;
        inserir(lista, num);
    }

    int maior = lista->valor;
    int menor = lista->valor;
    int soma = 0, cont = 0;
    int produto = 1;
    int somaI = 0;

    Node *aux = lista;
    while (aux != NULL) {
        int v = aux->valor;
        if (v > maior) maior = v;
        if (v < menor) menor = v;
        soma += v;
        cont++;
        if (v % 2) {
            somaI += v;
        } else {
            produto *= v;
        }
        aux = aux->prox;
    }

    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("media: %f\n", (float)soma / cont);
    printf("produto pares: %d\n", produto);
    printf("soma impares: %d\n", somaI);

    aux = lista;
    while (aux != NULL) {
        Node *temp = aux;
        aux = aux->

