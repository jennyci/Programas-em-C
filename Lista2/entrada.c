#include <stdio.h>
 int main(){
 	int a, b, divisao, resto;

 	printf("Digite um numero: ");
 	scanf("%d %d", &a, &b);
 	if ( b =! 0){
 		printf("entrada inválida\n");
 	}
 	divisao = a / b;
 	resto = a % b;

    printf("divisao : %d\n", divisao);
 	printf("resto : %d\n", resto);
 	return 0;
 }