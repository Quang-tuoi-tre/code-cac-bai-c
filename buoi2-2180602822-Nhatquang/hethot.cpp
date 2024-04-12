#include<stdio.h>
int main () {
	int n;
	printf("Moi nhap so 2 chu so: ");
	scanf("%d", &n);
	int a = n/10;
	int b = n%10;
	if(n>10 && n<99){
	switch(a){
		case 1:printf("Muoi ");break;
		case 2:printf("Hai muoi ");break;
		case 3:printf("Ba muoi ");break;
		case 4:printf("Bon muoi ");break;
		case 5:printf("Nam muoi ");break;
		case 6:printf("Sau muoi ");break;
		case 7:printf("Bay muoi ");break;
		case 8:printf("Tam muoi ");break;
		case 9:printf("Chin muoi ");break;
	}
		switch(b){
		case 1:printf("mot");break;
		case 2:printf("hai");break;
		case 3:printf("ba");break;
		case 4:printf("bon");break;
		case 5:printf("nam");break;
		case 6:printf("sau");break;
		case 7:printf("bay");break;
		case 8:printf("tam");break;
		case 9:printf("chin");break;
		}
	}else
		printf("Khong phai so co 2 chu so");
	return 0;
}
