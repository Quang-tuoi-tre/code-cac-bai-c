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
long tinhtong( int a[], int n){
	long s=0;
	for(int i=0; i<n;i++)
	s=s+a[i];
	return s;
}
int tim_pt_am(int a[],int n){
	for(int i=0;i<n;i++){
		if(a[i]<0)
		return i;
	}
	return -1;
}
void DemChanDemLe(int a[], int n)
	{
	int  DemChan=0, DemLe=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]%2==0)
			DemChan = DemChan + 1;
	
	}
	printf("\nSo chan la: %d", DemChan);
	
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int main () {
	int a[50],n;
	printf("Nhap phan tu cua mang: ");
	scanf("%d",&n);
	Nhapmang(a,n);
	Xuatmang(a,n);
	long g =tinhtong(a,n);
	printf("\nTong cua mang la: %ld",g);
	
	
	int k=tim_pt_am(a,n);
	if(k!=-1)
	printf("\nVi tri so am dau tien %d",k);
	else
	printf("\nKhong co so am dau tien trong mang");
	
	
	DemChanDemLe(a,n);
	
	
	printf("\nMax = %d", max(a, n));
	
	
	return 0;
}
