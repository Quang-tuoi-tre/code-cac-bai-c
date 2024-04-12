#include<stdio.h>
//1a
void nhap(int &n){
	do{
		printf("n =");scanf("%d",&n);
	}while(n<=0);
	
}	

int main () {
	int n;
	nhap(n);
	
	printf("%d",n);
	return 0;
}
