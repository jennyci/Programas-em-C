#include <stdio.h>
  int main (){
  	int a,b;
  	float q;

  	printf("Digite um numero inteiro:\n ");
  	scanf("%d", &a);
  	printf("Digite outro numero inteiro:\n");
  	scanf("%d", &b);

  	q = a / b;

  	printf("Quociente : %f\n", q);
  	return 0;

  }