#include <stdio.h>
 int main(){
  int opcao,a,b;
   opcao = 1;
   printf("1- Soma\n");
   printf("2- Subtração\n");
   printf("3- Produto\n");
   printf("4- Quociente\n");
   printf("Digite uma Opção\n");
   scanf("%d",&opcao);
   while( opcao < 1 || opcao > 4){
    printf("Digite uma opção válida\n");
    scanf("%d",&opcao);
    opcao = opcao + 0;
   }
   printf("Digite um numero:");
   scanf("%d",&a);
   printf("Digite um numero:");
   scanf("%d",&b);
   if( opcao == 1){
    printf("Soma : %d\n", a + b);
   }
   if( opcao == 2){
    printf("Subtraçao : %d\n", a - b);
   }
   if( opcao == 3){
    printf("Produto : %d\n", a * b);
   }
   if( opcao == 4){
    printf("Divisão : %d\n", a / b);
    printf("Resto : %d\n", a % b);
   }

   return 0;

 }