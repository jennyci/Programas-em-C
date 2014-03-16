#include <stdio.h>
  int main(){
  	int a, b, opcao;
  	
    printf("Escolha uma opção : ");
  	scanf("%d", &opcao);
  	printf("Digite um numero : ");
  	scanf("%d", &a);
  	printf("Digite um numero : ");
  	scanf("%d", &b);

  	if(opcao == 1){
  		printf("Soma : %d\n", a + b);
  	}
  	else if(opcao == 2){
  		printf("Subtração : %d\n", a - b);
  	}
  	else if (opcao == 3){
  		printf("Produto : %d\n", a * b);
  	}
  	else if (opcao == 4){
  		printf("Divisão : %d\n", a / b);
  		printf("Resto : %d\n", a % b);
  	}
  	else{
  		printf("Opcão inválida\n");
  	}
  	return 0;
  }
