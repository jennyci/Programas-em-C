#include <stdio.h>
#define TAM 100

int main()
{
	int i;
	char s[i];

    printf("Digite um texto: ");
    fgets(s,TAM,stdin);

    for(i = 0;s[i] >= 97 || s[i] <= 122; i++)
    {
    	printf("%c",s);
    }
    return 0;
}