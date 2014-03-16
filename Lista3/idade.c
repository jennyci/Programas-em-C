#include <stdio.h>
  int main(){
  	int a ;

  	printf ("Digite uma idade: ");
  	scanf("%d",&a);

  	if( a < 0 || a > 100){
  		printf("digite algo entre 0 ou 100\n");
  	}
  	if ( a < 18){
  		printf("jovem\n");
  	}
  	if ( a >= 18 && a < 60){
  		printf("adulto\n");
  	}
  	if( a >= 60 ){
  		printf("idoso\n");
  	}
  	printf("idade : %d\n", a);
  	return 0;
  }