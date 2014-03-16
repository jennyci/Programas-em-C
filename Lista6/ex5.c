#include <stdio.h>
  int main(){
  	int v[5],c;

  	for(c = 0; c < 5; c++){
  		scanf("%d", &v[c]);
  	}
  	for(c--; c >= 0 ; c--){
  		printf("%d\n",v[c]);
  	}
  	
  	return 0;
  }