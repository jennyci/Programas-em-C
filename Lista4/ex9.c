int main(){
	int a, fatorial;
	scanf("%d",&a);
	while( a > 0){
		fatorial = fatorial * a;
		a = a - 1;
	}
	printf("fatorial",fatorial);

}