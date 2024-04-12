#include<stdio.h>
int main () {
	//cau c
	char g;
	printf("Nhap ky tu: ");
	scanf("%c" ,&g);
	printf("Ky tu: %c \n", g);
	
	//cau a
	int a;
	printf("Nhap so nguyen: ");
	scanf("%d" ,&a);
	printf("So nguyen: %d \n", a);
	
	//cau b
	float b;
	printf("Nhap so thuc ");
	scanf("%f" ,&b);
	printf("So thuc: %f \n", b);
	
	//cau d
	int x,y;
	printf("Nhap hai so nguyen ");
	scanf("%d%d", &x,&y);
	printf("Tong= %d\n", x+y);
	printf("Hieu= %d\n", x-y);
	printf("Tich= %d\n", x*y);
	printf("Thuong= %d\n", x/y);
	return 0;
	
}
