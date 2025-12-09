#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char fn[1024];
	char buffer[1024];
	int len;
	int n = 0;

	fgets(buffer, 1000, stdin);
	buffer[strcspn(buffer, "\n")] = '\0';
	len = strlen(buffer);
	
	do {
		if (n==0) sprintf(fn, "%s", buffer);
		else sprintf(fn, "%s%d", buffer, n);
		n++;
		fp = fopen(fn, "r");
	} while (fp != NULL && fclose(fp) == 0);

	fp = fopen(fn, "wb");

	fwrite(&n, sizeof(int), 1, fp);

	printf("Aberto: %s\n", fn);
	fclose(fp);	
	return 0;
}
