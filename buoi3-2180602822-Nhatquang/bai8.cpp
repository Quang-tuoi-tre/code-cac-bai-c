#include <stdio.h>
int main(){
	// cau a
	int n;
	printf ("Nhap n tu 1-100: ");
	scanf ("%d", &n);
	do{
		if (n<0||n>100){
			printf ("Nhap sai nhap lai: ");
			scanf ("%d", &n);
		}
	}
		while (n<=0||n>=100);
	// cau b
	int i=1, d=0;
	while(i<=n){
		if (n%i==0){
			d=d+1;
			i=i+1;
		}
		else{
			i=i+1;
		}
	}
	printf ("So uoc:%d", d);
	if (d==2){
		printf ("\nn la so nguyen to");
	}
	else{
		printf ("\nn khong phai la so nguyen to");
	}
	// cau c
	int sum=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    printf ("\nTong cua cac uoc so:%d", sum);
    if (sum==n){
    	printf ("\nn la so hoan thien");
	}
	else{
		printf ("\nn khong phai la so hoan thien");
	}
return 0;
}
