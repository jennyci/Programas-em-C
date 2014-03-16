int main(){
	int count,a,b,elevado;
scanf("%d",&a);
scanf("%d",&b);
count = 0;
elevado = 1;
while (count < b){
	elevado = elevado * a;
	count++;
}
printf("elevado", elevado);
}
