#include <stdio.h> 
  int main(){
  	int nota;
  	printf("Digite um numero: ");
  	scanf("%d", &nota);

  	if(nota >= 6){
  	 printf("Aprovado\n");
  	}
  	if(nota < 6){
  		printf("Reprovado\n");
  	}
  	return 0 ;
 }