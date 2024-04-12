#include<stdio.h>
int main () {
	int n;
	
	printf("Moi nhap n:");
	scanf("%d",&n );
	long s=0;
	int i=1;
	while(i<=n){
		s=s+i;
		i=i+1;
	}
	printf("s=%ld",s);
	return 0;
}
