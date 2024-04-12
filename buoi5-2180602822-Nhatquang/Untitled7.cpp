#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhapmang(int a[][MAX], int &m, int &n)
{
	int i,j;
	do
	{
		printf("nhap vao so dong cua ma tran: ");
		scanf("%d",&m);
	}while(m<=0);
	do
	{
		printf("nhap vao so cot cua ma tran: ");
		scanf("%d",&n);
	}while(n<=0);
	for( i=0;i<m;i++)
	{
		for( j=0;j<n;j++)
		{
			printf("\nso phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void xuatmang(int a[][MAX], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
double tong(int a[][MAX], int m, int j)
{
	double s=0;
	for(int i=0;i<m;i++)
		s=s+a[i][j];
	return s;
}
int tongnhonhat(int a[][MAX], int m, int n)
{
	int i,d,j;
	double min=tong(a,m,0);
	for( i=0;i<n;i++)
	{
		double t=tong(a,m,j);
		if(min>t)
		{
			min=t;
			d=j;
		}
	}
	return d;
}
int main () 
{
	int a[MAX][MAX], m,n;
	nhapmang(a,m,n);
	printf("\nnoi dung cua ma tran\n");
	xuatmang(a,m,n);
	int kq=tongnhonhat(a,m,n);
	printf("\nCot nho nhat trong ma tran la: %d",kq);
	return 0;
}

