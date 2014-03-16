#include <stdio.h>

int main()
{
int a = 0, soma = 0, contador = 0;

while(contador < 5)
{
printf("Entre com um numero: "); scanf("%d", &a);
soma = soma+a;
contador++;
}

printf("Soma %d\n", soma);

return 0;
}