#include<stdio.h>
int tong(int n){
	long s=0;
	for(int i=1;i<=n;i++)
	s=s+i;
	return s;
}
int main () {
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	long g=tong(n);
	printf("Tong cac so nguyen:%ld",g);
	return 0;
}
