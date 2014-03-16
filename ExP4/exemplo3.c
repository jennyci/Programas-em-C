#include <stdio.h>

#define TAM 51

int main() {
  char s[TAM];
  int i;
  FILE *entrada;

  entrada = fopen("exemplo3.txt", "r");

  if(entrada == NULL) {
    printf("ERRO: caminho invalido\n");
    return 0;
  }

  fscanf(entrada, "%d", &i);

  printf("%d\n", i);

  fgets(s, TAM, entrada);

  printf("%s\n", s);

  fclose(entrada);

  return 0;
}
