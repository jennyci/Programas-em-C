#include <stdio.h>
  int main(){
  	int a, b, aux;
  	printf("Digite um numero :");
  	scanf ("%d %d", &a, &b);
  	 if(a > b){
  	 	aux = a;
  	 	a = b;
  	 	b = aux;
  	 	}
  	printf("ordenados = %d %d\n", a,b);
  	return 0; 	
  }