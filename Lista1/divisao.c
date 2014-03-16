#include <stdio.h>
 int main(){
 	int a, b, divisao, resto ;

 	printf("Digite um numero: ");
 	scanf("%d", &a);

 	printf("Digite um numero: ");
 	scanf("%d", &b);

 	divisao = a / b ;
 	resto =  a % b ;

    printf("Divisao = %d\n", divisao);
    printf("resto= %d\n", resto);
    return 0;
}