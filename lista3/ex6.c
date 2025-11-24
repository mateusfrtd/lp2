#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int qtd,aux;
	printf("Quantos valores terá nesse array: ");
	scanf("%d", &qtd);
	int arr[qtd+1];
	printf("Entre com os valores: ");
	for(int i=0; i<qtd;i++) {
		scanf("%d", &arr[i]);
	}
	for(int i=0;i<qtd-1;i++) {
		for(int j=i+1;j<qtd;j++) {
			if(arr[i]>arr[j]) {
				aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
		}
	}

	for(int i=0;i<qtd;i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");	
	return 0;
}
