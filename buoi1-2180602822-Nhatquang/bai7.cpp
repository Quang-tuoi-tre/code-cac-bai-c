#include<stdio.h>
#include<math.h>
int main () {
	int a;
	printf("Nhap 3 chu so: ");
	scanf("%d",&a);
	int b=a/100;
	int d=a%100;
	int k=d/10;
	int l=d%10;
	int p=l*100+k*10+b;
	printf("So dao nguoc %d la: %d",a,p);
	return 0;
}
