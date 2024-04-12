#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n;
	float s;
	s = 0;
	i = 1;
		printf("\nNhap n: ");
		scanf("%d", &n);
	do
	{
	
		if(n < 1)
		{
			printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
		}	
	}while(i<=n);
		{
				s=s+(float)i/(i+1);
			i++;
		}
		printf("\nTong la %f", s);
		
		getch();
		return 0;
}
