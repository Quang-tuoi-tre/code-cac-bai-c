#include<stdio.h>
int main () {
	int n;
	printf("Moi nhap so 3 chu so: ");
	scanf("%d", &n);
	int a = n/100;
	int b = (n/10)%10;
	int c = n%10;
	if(n>100 && n<999){
	switch(a){
		case 1:printf("Mot tram ");break;
		case 2:printf("Hai tram ");break;
		case 3:printf("Ba tram ");break;
		case 4:printf("Bon tram  ");break;
		case 5:printf("Nam tram ");break;
		case 6:printf("Sau tram ");break;
		case 7:printf("Bay tram ");break;
		case 8:printf("Tam tram ");break;
		case 9:printf("Chin tram ");break;
	}
		if(b % 10 == 0 && a != 0){
      printf("le ");
  }
		switch(b){
		case 1:printf("muoi");break;
		case 2:printf("hai muoi");break;
		case 3:printf("ba muoi ");break;
		case 4:printf("bon muoi ");break;
		case 5:printf("nam muoi ");break;
		case 6:printf("sau muoi ");break;
		case 7:printf("bay muoi ");break;
		case 8:printf("tam muoi ");break;
		case 9:printf("chin muoi ");break;
		}
		switch(c){
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
		printf("Khong phai so co 3 chu so");
	return 0;

}
