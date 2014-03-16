#include <stdio.h>
  int main(){
   int v[500],c;

   for(c = 0; c < 500; c++){
      scanf("%d", &v[c]);
   }
   for(c--; c >= 0 ; c--){
      printf("%d\n",v[c]);
   }
   
   return 0;
  }