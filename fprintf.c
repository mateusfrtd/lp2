#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *fp;
	char fn[1024];
	char ln[1024];

	printf("arquivo a ser aberto: ");
	fgets(fn, 1000, stdin);
	fn[strcspn(fn, "\n")] = '\0';
	fp = fopen(fn, "a");
		while(fgets(ln, 1000, stdin)!= NULL) {
		fprintf(fp, "%s\n", ln);
		fn[strcspn(fn, "\n")] = '\0';
		}
	fclose(fp);
	return 0;
}
