#include <stdio.h>
#define TAM 51
int main()
{
	int i, j, w, n, aux, aux2, aux3;
	char s[TAM], Decod, k[TAM], Cod, CodRest,c, d;

	printf("Digite 1 para codificar e 2 para decodificar: ");
	scanf("%d", &n);    
	do
	{
		scanf("%c",&c);
	}while( c != '\n');
	printf("Digite o texto: ");
    fgets(s, TAM, stdin);	
	

	if(n == 1 )	
	{		   
	    for(i = 0; s[i] != '\n'; i++)
		    {	
			    aux = s[i];
			    aux2 = aux / 16;
			    aux3 = aux % 16;
			    if(aux2 == 1 )
			    {
			        Cod = '1';
			    }
			    else if(aux2 == 2)
			    {
			        Cod = '2';
			    }
			    else if(aux2 == 3)
			    { 
			        Cod = '3';
			    }
			    else if(aux2 == 4)
			    {
			        Cod = '4';
			    }
			    else if(aux2 == 5)
			    {
			        Cod = '5';
			    }
			    else if(aux2 == 6)
			    {
			        Cod = '6';
			    }
			    else if(aux2 == 7)
			    {
			        Cod = '7';
			    }
			    else if(aux2 == 8)
			    {
			        Cod = '8';
			    }
			    else if(aux2 == 9)
			    {
			        Cod = '9';
			    }
			 
			    if(aux3 == 1)
			    {
			        CodRest = '1';
			    }
			    else if(aux3 == 2)
			    {
			        CodRest = '2';
			    }
			    else if(aux3 == 3)
			    { 
			        CodRest = '3';
			    }
			    else if(aux3 == 4)
			    {
			        CodRest = '4';
			    }
			    else if(aux3 == 5)
			    {
			        CodRest = '5';
			    }
			    else if(aux3 == 6)
			    {
			        CodRest = '6';
			    }
			    else if(aux3 == 7)
			    {
			        CodRest = '7';
			    }
			    else if(aux3 == 8)
			    {
			        CodRest = '8';
			    }
			    else if(aux3 == 9)
			    {
			        CodRest = '9';
			    }
			    else if(aux3 == 10)
			    {
			        CodRest = 'A';
			    }
			    else if(aux3 == 11)
			    {
			        CodRest = 'B';
			    }
			    else if(aux3 == 12)
			    { 
			        CodRest = 'C';
			    }
			    else if(aux3 == 13)
			    {
			        CodRest = 'D';
			    }
			    else if(aux3 == 14)
			    {
			        CodRest = 'E';
			    }
			    else if(aux3 == 15)
			    {
			    CodRest = 'F';
			    }
			
			    if(i == 0)
			    {
		 		    k[i] = Cod;
				    k[i+1] = CodRest;
			    }
			    else
			    {
				    k[i*2] = Cod;
				    k[(i*2)+1] = CodRest;
				    w = (i*2)+1;
			    }   
		    }

			for(j = 0; j <= w; j++)
		    {
		        printf("%c", k[j]);
		    }
		    printf("\n");                 
    }
    else
    {       
        w=0;
        for(i = 0; s[i] != '\n' && s[i] != '\0' ; i++)
        {	
		    if(i % 2 == 0)
		    {
			    Cod = s[i + 1];
			 
           	    if(s[i] == '1')
			    {
			        aux2 = 1;
			    }
			    else if(s[i] == '2')
			    {
			        aux2 = 2;
			    }
			    else if(s[i] == '3')
			    {  
			        aux2 = 3;
			    }
			    else if(s[i] == '4')
			    {
			        aux2 = 4;
			    }
			    else if(s[i] == '5')
			    {
			        aux2 = 5;
			    }
			    else if(s[i] == '6')
			    {
			        aux2 = 6;
			    }
			    else if(s[i] == '7')
			    {
			        aux2 = 7;
			    }
			    else if(s[i] == '8')
			    {
			        aux2 = 8;
			    }
			    else if(s[i] == '9')
			    {
			        aux2 = 9;
			    }
			 
		    
			 
			    if(Cod == '1')
			    {
			        aux3 = 1;
			    }
			    else if(Cod == '2')
			    {
			        aux3 = 2;
			    }
			    else if(Cod == '3')
			    { 
			        aux3 = 3;
			    }
			    else if(Cod == '4')
			    {
			        aux3 = 4;
			    }
			    else if(Cod == '5')
			    {
			        aux3 = 5;
			    }
			    else if(Cod == '6')
			    {
			        aux3 = 6;
			    }
			    else if(Cod == '7')
			    {
			        aux3 = 7;
			    }
			    else if(Cod == '8')
			    {
			        aux3 = 8;
			    }
			    else if(Cod == '9')
			    {
			        aux3 = 9;
			    }
			    else if(Cod == 'A')
			    {
			        aux3 = 10;
			    }
			    else if(Cod == 'B')
			    {
			        aux3 = 11;
			    }
			    else if(Cod == 'C')
			    { 
			        aux3 = 12;
			    }
			    else if(Cod == 'D')
			    {
			        aux3 = 13;
			    }
			    else if(Cod == 'E')
			    {
			        aux3 = 14;
			    }
			    else if(Cod == 'F')
			    {
			        aux3 = 15;
			    }		
           		
                aux2 = aux2 * 16;
			    Decod = aux2+aux3;
			    k[i/2] = Decod;		
                w++;	    
		}
    }
		
		for(j = 0; j <= w; j++)
		    {
			    printf("%c", k[j]);
		    }
		    printf("\n");
	}
	
    
    return 0;

}
