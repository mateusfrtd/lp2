#include <stdio.h>

int main(void)
{
	int id, ts;
	char s;	
	printf("entre com idade, tempo de servico e sexo(h/m)(nesta ordem): ");
	scanf("%d %d %c", &id, &ts, &s);

	if ((id>64) || (ts>29) || ((id>59)&&(ts>24)) || (((id+ts>89)&&(s=='h'))&&((id+ts>84)&&(s=='m')))) {
		printf("Pode se aposnetar.\n");
	} else {
		printf("não pdie se aposentar.\n");
	}

	return 0;
}
