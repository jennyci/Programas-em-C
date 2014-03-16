int main(){
int maior, a, count;
maior = 0;
while(count == 0){
	scanf(%d,&a);
	if(count == 0 ){
		maior = a ;
	}
	else{
		if(maior < a){
			maior = a;
		}

	}
	count++;
}
printf("maior",maior);
}