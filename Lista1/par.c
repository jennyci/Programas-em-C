#include <stdio.h>
  int main(){
  	int x, par;
  	printf("Digite um numero :");
  	scanf("%d",&x);

  	par = x % 2;
  	

  	if( par == 0)
  	{
  		printf("0\n");
  	}
  	else
  	{
  		printf("1\n");
  	}
  	return 0;

  }