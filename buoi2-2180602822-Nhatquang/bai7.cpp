#include<stdio.h>
int main () {
	float km;
	float tien;
	printf("Moi nhap so km:");
	scanf("%f",&km);
	if(km<=1){
	tien = km*5000;
	}else if(km<=30 && km>=1){
	tien = 1*5000 + (km-1)*4000;
	}else{
		tien= 1*5000 +29*4000 + (km-30)*3000;
	}
	printf("So tien can phai tra %.3f VND", tien);
	return 0;
	
	
}
