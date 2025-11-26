#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  FILE *file;
  char *line = NULL;
  size_t size = 0;
  ssize_t lread;
  char f[100];

  printf("Qual arquivo deseja ler: ");
  fgets(f, 99, stdin);
  f[strcspn(f, "\n")] = '\0';
  
  file = fopen(f, "r");
  if(!file) {
    printf("Arquiv bacana hein. ERRO\n");
    exit(1);
  }

  while((lread = getline(&line, &size, file))!=-1) {
    printf("%s", line);
  }
  free(line);
  fclose(file);
  return 0;
}
