#include <stdio.h>
  int main(){
    int a, b, opcao;

    printf("Escolha uma opção : ");
    scanf("%d", &opcao);
    printf("Digite um numero : ");
    scanf("%d", &a);
    printf("Digite um numero : ");
    scanf("%d", &b);

    switch(opcao) {
    	case 1 :
    	printf("Soma : %d\n", a + b );
    	break;
    	case 2 :
    	printf("Subtração : %d\n", a - b);
    	break;
    	case 3 :
    	printf("Multiplicação : %d\n", a * b);
    	break;
    	case 4 :
    	printf("Divisão : %d\n", a / b);
    	printf("Resto : %d\n", a % b);
    	break;
    	default :
    	printf("Opção Inválida\n");
    }
        return 0;
}