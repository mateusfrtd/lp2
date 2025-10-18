#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int flag, opt, argt;
	char t;

	while((opt = getopt(argc, argv, "nt:")) != -1){
		switch (opt) {
			case 'n':
				flag = 1;
				printf("n aqui\n");
				break;
			case 't':
				t = opt;
				argt = atoi(optarg);
				break;
			default:
				printf("default");

		}
	}

	printf("flag: %i | t: %c | argt: %i\n", flag, t, argt);


	return 0;
}
