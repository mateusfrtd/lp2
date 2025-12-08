#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char string[1024];
	int len;

	fgets(string, 1024, stdin);
	len = strlen(string);
	string[len-1] = '\0';
	len--;

	do {
		printf("%c", string[len-1]);
		len--;
	} while (len>0);

	printf("\n");
	return 0;
}
