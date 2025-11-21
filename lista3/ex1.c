#include <stdio.h>
#include <stdlib.h>

int main(void);
int a();
int a(void){
	int num;
	printf("Entre com um valor: ");
	scanf("%d", &num);

	if (num%2==0) return 0;
	return 1;
}

int main(void) {
	int o;
	o = a();
	printf("%d\n", o);
	return 0;
}
