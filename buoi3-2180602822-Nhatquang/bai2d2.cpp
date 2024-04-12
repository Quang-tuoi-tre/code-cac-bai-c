#include<stdio.h>
#include<math.h>
int main() {
	int n,i,t;
	long s=0;
	printf("Moi nhap n:");
	scanf("%d",n);
	for(i=1;i<=n;i++){
		t= pow(-1,i)*i;		;
		s=s+t;
	}
	printf("s=%ld",s);
	return 0;
	
	
}
