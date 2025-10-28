#include <stdio.h>

int main(void)
{
	int i;
	printf("For\n");
	for(i=1; i<=100; i+=3) {
		printf("-%d\n", i);
	}
	i = 1;
	printf("While\n");
	while (i<=100) {
		printf("-%d\n", i);
		i +=3;
	}
	i = 1;
	printf("Do while\n");
	do {
		printf("-%d\n", i);
		i+=3;
	} while (i<=100);

	return 0;
}
