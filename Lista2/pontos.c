#include <stdio.h>
  int main(){
  	int a;
  	printf("Digite um numero: ");
  	scanf("%d", &a);

  	if(a < 0){
  		a = 0 ;
  		}
    if(a > 10){
    	a = 10;
    }
    if(a => 0 || a =< 10){
    	a = a; 
    }
    printf("Pontos = %d\n", a);
    return 0 ;
  }