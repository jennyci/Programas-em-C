#include <stdio.h>

#define FALSE 0
#define TRUE  1

#define TAM 51

int main() {
  char *s, linha[TAM];
  FILE *entrada;

  entrada = fopen("exemplo1.txt", "r");

  if(entrada == NULL) {
    printf("ERRO: caminho invalido\n");
    return 0;
  }

  while(TRUE) {
    s = fgets(linha, TAM, entrada);

    if(s == NULL)
      break;

    printf("%s\n", linha);
  }

  fclose(entrada);

  return 0;
}
