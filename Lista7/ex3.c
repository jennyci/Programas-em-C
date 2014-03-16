#include <stdio.h>
#define TAM 25

int main()
{
	int i;
	char s[TAM];

	printf("Digite um texto: ");
	fgets(s,TAM,stdin);

	for(i=0; s[i] != '\0' && s[i] != '\n'; i++);
	
	for(i--; s[i] != '\0' && s[i] != '\n'; i--)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	return 0;

}