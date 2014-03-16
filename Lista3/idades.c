#include <stdio.h>
  
int main(){
  	
int a;
  	 
printf("Digite um numero: ");
  	 
scanf("%d", &a);

  	 
if(a < 18){
  	 	
printf("jovem\n");
  	 
}
  	 
else if(a >= 18 && a < 60){
  	 	
printf("adulto\n");
  	 
}
else{ 
printf("idoso\n");
  	 
}
  	 

  	 
printf("idade = %d\n",a);
  	 
return 0 ;

}