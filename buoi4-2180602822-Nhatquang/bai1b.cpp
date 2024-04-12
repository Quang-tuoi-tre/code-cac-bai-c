#include<stdio.h>
//1b
void lietke(int n){
	
	for(int i=1; i<=n;i++)
	if(i%2==0)
	printf("\n%d",i);
}

int main () {
	int x;
	printf("Nhap n: ");
	scanf("%d",&x);
	printf("cac so chan la: ");
	lietke(x);
	
	return 0;
}
