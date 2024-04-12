#include<stdio.h>
int main () {
	int a,b,c;
	printf("Nhap ba canh tam giac :");
	scanf("%d%d%d", &a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
	if(a==b && b==c){
		printf("Thanh 1 tam giac deu");}
	else if(a==b || b==c || c==a){
		printf("Thanh 1 tac giac can");}
	else if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b){
		printf("Thanh 1 tam giac vuong");}
	else
	printf("Day la tam giac thuong ");
	}=
	
	else
		printf("Khong thanh 1 tam giac ");
		return 0;
}
