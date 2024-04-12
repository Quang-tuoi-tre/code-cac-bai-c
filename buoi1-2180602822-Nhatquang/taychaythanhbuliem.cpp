#include<stdio.h>
int main() {

	int a,b,c, max;
	printf("Nhap 3 so nguyen ");
	scanf("%d%d%d", &a,&b,&c);
	max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	printf("\nSo lon nhat la %d", max);
	return 0;
}
