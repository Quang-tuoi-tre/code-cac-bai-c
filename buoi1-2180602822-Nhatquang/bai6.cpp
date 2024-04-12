#include<stdio.h>
#include<math.h>
int main () {
	float CV, DT, p;
	unsigned a, b,c;
	printf("Nhap ba canh tam giac ");
	scanf("%u%u%u", &a,&b,&c);
	if(a+b>c &&a+c>b &&c+b>a){
		printf("Lap thanh tam giac\n");
		CV=a+b+c;
		printf("Chu vi cua tam giac %f\n", CV);
		p=CV/2;
		DT=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("Dien tich tam giac %f\n", DT);
	}else{
		printf("Khong thanh lap tam giac");
	}
	return 0;
}
