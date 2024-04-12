#include<stdio.h>
int main () {
	char chon;
	float a,b;
	printf("Nhap 2 so: ");
	scanf("%f%f", &a,&b );
	printf("1.Cong 2 so\n2.Tru 2 so\n3.Tich 2 so\n4.Thuong 2 so\n ");
	printf("Chon: ");scanf("%s", &chon);
	switch(chon){
		case +:
			printf("Tong so a va b: %f", a+b);break;
		case -:
			printf("Hieu so a va b: %f" ,a-b);break;
		case *:
			printf("Tich so a va b: %f" ,a*b);break;
		case /:
			printf("Thuong so a va b: %f" ,a/b );break;
		default : printf("\n Thoat");
	}
	return 0;
}
