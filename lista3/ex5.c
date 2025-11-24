#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1, num2, p, mmc=1, div=2;
	printf("Entre com 2 inteiros: ");
	scanf("%d %d", &num1, &num2);
	while (num1!=1 && num2!=1) {
		if (num1%div==0 && num2%div==0){
			num1 = num1/div;
			num2 = num2/div;
			mmc *= div;
		} else if (num1%div==0) {
			num1 = num1/div;
			mmc *= div;
		} else if (num2%div==0) {
			num2 = num2/div;
			mmc *= div;
		} else {
			p=0;
			div++;
			while(!p) {
				p = 1;
				for (int j=2; j<div; j++) {
					if (div%j==0) {
						p=0;
            					div++;
						break;
					}
				}
			}
		}
	}
	printf("%d\n", mmc);
	return 0;
}
			
