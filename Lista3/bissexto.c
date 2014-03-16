#include <stdio.h>
  int main(){
  	int ano;

  	printf("Digite um ano : ");
  	scanf("%d", &ano);

  	if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
  		printf("Bissexto\n");
  	}
  		else{
  			printf("Normal\n");
  		}
  	 return 0;
}