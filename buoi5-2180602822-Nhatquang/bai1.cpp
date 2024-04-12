#include<stdio.h>
#include<math.h>
//1a
void Nhapmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap phan tu thu %d: ", i+1);
		scanf("%d",&a[i]);
		
	}
}
//1b
void Xuatmang(int a[], int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
//1e
long tinhtong( int a[], int n){
	long s=0;
	for(int i=0; i<n;i++)
	s=s+a[i];
	return s;
}
//1d
void Demsoam(int a[], int n)
{
	int  DemAm=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]<0)
			DemAm = DemAm + 1;
		
	}
	printf("\nSo phan tu am co trong mang la :%d", DemAm);
}
//1c
void xuatchiahetcho3(int a[], int n){
	printf("\nPhan tu chia het cho 3: ");
	for(int i = 0; i<n; i++){
		if(a[i]%3==0){
			printf("%d\t", a[i]);
		}
	}
}
//1f
int tbc(int a[], int n)
{
    int s=0;
    for (int i=0; i<n; i++)
    {
        s=s + a[i];
    }
    float tb=s/n;
    return tb;
}
//1g
int tbcsoduong(int a[], int n){
	int s=0;
	int dem=0;
	for (int i=0; i<n; i++){
		if(a[i]>0){
			s=s +a[i];
			dem=dem+1;
		}
	}float tb=s/dem;
	return tb;
}
//1h
int ktsont(int n){
	if(n<2)
		return 0;
		for(int i=2;i<= sqrt(n);i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
void insont(int a[], int n){
	printf("\nSo nguyen to la: ");
	for (int i=0; i<n; i++){
		if(ktsont(a[i])){
			printf("%d\t", a[i]);
		}
	}
	
		}
//1i
int demsont(int a[],int n){
	int s=0;
		for (int i=0; i<n; i++){
		if(ktsont(a[i])){
			s=s+1;
		}
	}
	return s;
}
//1j
int tongsont(int a[],int n){
	int s=0;
		for (int i=0; i<n; i++){
		if(ktsont(a[i])){
			s=s+a[i];
		}
	}
	return s;
}
//1k
int tbcsont(int a[],int n){
	int s=0;
	int dem=0;
		for (int i=0; i<n; i++){
		if(ktsont(a[i])){
			s=s+a[i];
			dem=dem+1;
		}
	}
	float tb=s/dem;
	return tb;
}
//1l
int TimGiaTriDuongDauTien(int a[],int n)
{
 
 printf("\ngia tri duong dau tien: ");
 for(int i=0;i<n;i++)
 {
 
 if(a[i]>0) 
 return a[i]; 
 }
 return -1; 
}
//1m
int TimGiaTriDuongCuoiCung(int a[], int n)
{
	printf("\ngia tri duong cuoi cung: ");
   for (int i=n-1; i>=0; i--)
   {
      if (a[i]>0)
         return a[i];
   
}return -1;
}
//1n
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
//1o
int timphantuamnhonhat(int a[],int n)
{
 int max;
 for(int i=0;i<n;i++)
 {
 if(a[i]<0)
  {
   max=a[i];
   for(int j=0;j<n;j++)
    {
     if(a[j]>max && a[j]<0) 
   max=a[j];
   
    }
 }
 }
 return max;
}
int main () {
	int a[10],n;
	printf("Nhap phan tu cua mang: ");
	scanf("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	long g =tinhtong(a,n);
	printf("\nTong cua mang la: %ld",g);
	xuatchiahetcho3(a,n);
	Demsoam(a,n);
	int h=tbc(a,n);
	printf("\nTrung binh cong cua mang: %d",h);
	int j=tbcsoduong(a,n);
	printf("\nTrung binh cong so duong:%d ",j);
	insont(a,n);
	int p=demsont(a,n);
	printf("\nSo luong so nguyen to:%d",p);
	int q=tongsont(a,n);
	printf("\nTong so nguyen to:%d",q);
	int w=tbcsont(a,n);
	printf("\nTrung binh cong so nguyen to:%d",w);
	printf("%d",TimGiaTriDuongDauTien(a,n));
	printf("%d",TimGiaTriDuongCuoiCung(a,n));
	printf("\nPhan tu lon nhat : %d", max(a, n));
	printf("\nPhan tu am lon nhat: %d",timphantuamnhonhat(a,n));
	return 0;
}
