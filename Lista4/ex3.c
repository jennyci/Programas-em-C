#include <stdio.h>
  int main(){
  	int contador;
  	contador = 2;
  	while(contador < 101){
  	if(contador % 2 == 0){
  		printf("%d\n",contador);
  	}
  	contador = contador + 2;
  	}
  	return 0;
  }