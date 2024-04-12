#include<stdio.h>
#include<math.h>
//1a
void Nhapmang(float a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%f",&a[i]);
		
	}
}
//1b
void Xuatmang(float a[], int n){
	for(int i=0;i<n;i++){
		printf("%f\t",a[i]);
	}
}
//1e
float tinhtong( float a[], int n){
	float s=0;
	for(int i=0; i<n;i++)
	s=s+a[i];
	return s;
}
//1d
void Demsoam(float a[], int n)
{
	int  DemAm=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]<0)
			DemAm = DemAm + 1;
		
	}
	printf("\nSo phan tu am co trong mang la :%d", DemAm);
}
//1f
float tbc(float a[], int n)
{
    float s=0;
    for (int i=0; i<n; i++)
    {
        s=s + a[i];
    }
    float tb=s/n;
    return tb;
}
//1g
float tbcsoduong(float a[], int n){
	float s=0;
	float dem=0;
	for (int i=0; i<n; i++){
		if(a[i]>0){
			s=s +a[i];
			dem=dem+1;
		}
	}float tb=s/dem;
	return tb;
}
int main () {
	float a[10];
	int n;
	printf("Nhap phan tu cua mang: ");
	scanf("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	float g =tinhtong(a,n);
	printf("\nTong cua mang la: %f",g);
		Demsoam(a,n);
	float h=tbc(a,n);
	printf("\nTrung binh cong cua mang: %f",h);
	float j=tbcsoduong(a,n);
	printf("\nTrung binh cong so duong:%f ",j);
	return 0;
}

