#include <stdio.h>
#define TAM 100
int main(){
	char s[TAM];

	printf("Digite uma linha de texto: ");
	fgets(s, TAM, stdin);
	printf("%s\n",s);
	return 0;
}