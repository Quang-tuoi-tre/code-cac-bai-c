#include <stdio.h>
int sodaonguoc(int n){
	int s=0;
	while (n>0){
		s=s*10+n%10;
		n/=10;
	}
	return s;
}
int main () {
	int n;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&n);
	int g= sodaonguoc(n);
	printf("So dao nguoc: %d\n",g);
	return 0;
}
