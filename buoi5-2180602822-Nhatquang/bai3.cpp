#include<stdio.h>
void Nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d",&a[i]);
			}
}
void Xuatmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int ktsohoanthien(int n){
	int i, s=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			s=s+i;
			
		}
		if(s==n)
		return 1;
	}
	return 0;
}
void insohoanthien(int a[],int n){
	printf("\nSo hoan thien la: ");
	for (int i=0; i<n; i++){
		if(ktsohoanthien(a[i])){
			printf("%d\t", a[i]);
		}
	}
	}
int  main () {
	int a[50],n;
	printf("Nhap phan tu cua mang: ");
	scanf("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	insohoanthien(a,n);
	return 0;
}
