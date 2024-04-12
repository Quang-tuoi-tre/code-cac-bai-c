#include<stdio.h>
void tbc(int n){
	int s = 0;

	for(int i=1;i<=n;i++){
	
	s+=i;
}
float tbc= s/n;
printf("Trung binh cong la: %f",tbc);

}
int main () {
	int x;
	printf("Nhap so nguyen: ");
	scanf("%d",&x);
	
	tbc(x);
	return 0;
}
