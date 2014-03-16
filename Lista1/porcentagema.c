#include <stdio.h>
int main(){
	int multiplicacao;
	float a,b,divisao;

	printf("Digite um numero:");
	scanf("%f", &a);

	printf("Dgite outro numero:");
	scanf("%f", &b);

	divisao = a / b;
	
	multiplicacao = divisao * 100;

	printf("Resposta:%d%%\n", multiplicacao);

	return 0;
}