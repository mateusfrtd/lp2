#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int *vector;

  if ((vector = (int *) malloc(sizeof(int)*100)) == NULL){
    printf("Erro: Falha na alocação de memoria.\n");
    return 1;
  }

  for(int i=0; i<100; i++){
    vector[i] =  i;
  }

  for(int i=99; i>-1; i--){
    printf("%d\n", vector[i]);
  }

  free(vector);
  vector = NULL;

  return 0;
}
