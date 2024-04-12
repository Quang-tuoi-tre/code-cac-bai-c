#include<stdio.h>
int main () {
	int n,i;
	float s=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+(float)i/(i+1);
	}
		printf("%f",s);
	return 0;

}

