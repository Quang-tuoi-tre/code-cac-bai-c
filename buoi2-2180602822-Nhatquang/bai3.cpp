#include<stdio.h>
int main () {
	int nam;
	printf("Moi nhap so nam ");
	scanf("%d", &nam);
	if(nam %4 ==0 && nam % 100!=0 || nam % 400 ==0){
		printf("Nam nay la nam nhuan ");
	}else{
		printf("Nam nay la nam khong nhuan ");	
	}
	return 0;
}
