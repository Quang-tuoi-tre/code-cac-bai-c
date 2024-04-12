#include<stdio.h>
void demcacuocso(int n){

	for(int i=1;i<=n;i++)
	if(n%i==0)
	printf("\n%d",i);
}
int main () {
	int x;
	printf("Nhap n:");
	scanf("%d",&x);
	printf("Cac uoc so la:");
	
	demcacuocso(x);
	return 0
	;
}
