#include <stdio.h>
  int main(){
  	int a,b,c;

    c = 0;

    while (c != 1 || c != 2 || c != 3 || c != 4 ){
      printf("Digite ~uma opção: ");
      scanf("%d", &c);
          }

  	printf("Digite dois numeros : ");
  	scanf("%d %d", &a, &b);

     		switch (c){

  			case 1: 
  			printf("Soma : %d\n", a + b);
  			break;

  			case 2:
  			printf("Diferença : %d\n", a - b);
  			break;

  			case 3:
  			printf("Produto : %d\n", a * b);
  			break;

  			case 4:
  			printf("Divisão : %d\n", a / b);
  			printf("Resto : %d\n", a % b);
  			break;

  			default:{
  				printf("Opção inválida\n");
        }
  		}
  	
  	return 0;
  }