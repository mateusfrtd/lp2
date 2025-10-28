#include <stdio.h>

int main(void)
{
	int i;
	printf("For\n");
	for(i=1; i<=100; i++) {
		printf("-%d\n", i);
	}
	i = 1;
	printf("While\n");
	while (i<=100) {
		printf("-%d\n", i);
		i++;
	}
	i = 1;
	printf("Do while\n");
	do {
		printf("-%d\n", i);
		i++;
	} while (i<=100);

	return 0;
}
