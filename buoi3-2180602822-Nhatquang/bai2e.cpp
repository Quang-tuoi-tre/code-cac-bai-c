#include<stdio.h>
int main () {
	int n,cs;
	long s=0;
	printf("Moi nhap so n: ");
	scanf("%d",&n);
	while(n>0)  
{  
	cs=n%10;  
		s=s+cs;  
	n=n/10;  
	}  
	printf("\nTong cac so da cho = %ld",s);  
	return 0;
		
}
