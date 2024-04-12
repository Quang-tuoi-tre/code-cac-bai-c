#include<stdio.h>
int main () {
	int n,t;
	printf("Moi nhap n: ");
	scanf("%d",&n);
long s=0;
	int i=1;
	while(i<=n){
		s=s+(i/(i+1));
		i=i+1;
	}
	printf("s=%ld",s);

	return 0;
}
