#include <stdio.h>
 int main(){
 	int a, b, multiplicacao, porcentagem ;
 	printf("Digite um numero: ");
 	scanf("%d", &a);

 	printf("Digite um numero: ");
 	scanf("%d", &b);

 	multiplicacao = a * 100 ;
 	porcentagem = multiplicacao / b ;

    printf("multiplicacao = %d\n", multiplicacao);
 	printf("porcentagem = %d%%\n", porcentagem);
 	
 	return 0;
 }
