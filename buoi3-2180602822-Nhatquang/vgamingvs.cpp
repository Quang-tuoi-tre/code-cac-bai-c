#include<stdio.h>
int main () {
	int n,i,u;
	int t=-1;
	int x=-1;
	long s=0;
	printf("Moi nhap n:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		t=(t*x);
		u=t*i;
		s=s+u;
		
	}
	printf("%ld",s);
	return 0;
}
