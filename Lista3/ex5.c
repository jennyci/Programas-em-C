#include <stdio.h>
int main(){
	int a;

	printf("Digite um numero:\n");
	scanf("%d", &a);

	if(a==1)
		printf("Um\n");
	else if(a==2)
		printf("Dois\n");
	else
		printf("Três\n");
	return 0;
}