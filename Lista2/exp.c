#include <stdio.h>
  int main(){
  	int x ;
  	 printf("Digite um numero: ");
  	 scanf("%d", &x);

  	 if (x < 0) {
  	 	x = -x ;
  	 }

  	  printf("Modulo = %d\n", x);
  	  return 0 ;
  	}