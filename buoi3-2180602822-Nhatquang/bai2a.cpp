#include<stdio.h>
int main () {
	int n,i,x;
	int t=1;
	printf("Moi nhap x va n:");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++){
		t=t*x;
	}
	printf("%d",t);
	return 0;
}
