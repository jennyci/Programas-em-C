#include <stdio.h>

int main() {
  FILE *saida;

  saida = fopen("exemplo2.txt", "w");

  if(saida == NULL) {
    printf("ERRO: caminho invalido\n");
    return 0;
  }

  fprintf(saida, "Hello World!\n");
  fprintf(saida, "inteiro: %d\n", 1);
  fprintf(saida, "decimal: %f\n", 0.1);
  fprintf(saida, "caractere: %c\n", 'a');

  fclose(saida);

  return 0;
}
