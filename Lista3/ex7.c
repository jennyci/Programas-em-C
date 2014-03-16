#include <stdio.h>
  int main(){
  	int p;
  	float a, b, q;

  	printf("Digite dois numeros inteiros:\n");
  	scanf("%d %d", &a, &b);

  	q = a / b;

  	p = q * 100;

  	printf("Porcentagem : %d%%\n", p);
  	return 0;
  }