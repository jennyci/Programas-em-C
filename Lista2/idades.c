#include <stdio.h>
  
int main(){
  	
int a;
  	 
printf("Digite um numero: ");
  	 
scanf("%d", &a);

  	 
if(a < 18){
  	 	
printf("jovem\n");
  	 
}
  	 
if(18 <= a ){
  	 	
printf("adulto\n");
  	 
}
  	 
if(a >= 60 ){
  	 	
printf("idoso\n");
  	 
}
  	 
printf("idade = %d\n",a);
  	 
return 0 ;

}