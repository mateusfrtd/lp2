#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]);

int main(int argc, char *argv[]) {
	float v[3];
	char ch, op;

	if (argc != 4) {
		printf("Opções inválidas.\n");
		exit(-2);
	}

	v[0] = atof(argv[2]);
	v[1] = atof(argv[3]);

	while ((ch=getopt(argc, argv, "asmd")) != -1) {
		switch(ch) {
			case 'a':
				v[2] = v[0] + v[1]; break;
			case 's':
				v[2] = v[0] - v[1]; break;
			case 'm':
				v[2] = v[0] * v[1]; break;
			case 'd':
				v[2] = v[0] / v[1]; break;
			default:
				printf("Default\n");
			}
	}

	printf("Resultado: %f\n", v[2]);
	return 0;
}


