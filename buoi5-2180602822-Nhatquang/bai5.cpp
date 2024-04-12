#include<stdio.h>
typedef struct thong_tin_sach{
	char tensach[31];
	char tentacgia[31];
	int namxb;
	char nhaxb[31];
	int giaban;
	int soluongban;
}Sach;

void Nhapsach(Sach &a){
	printf("Nhap ten sach: ");
	gets(a.tensach);
	printf("Nhap ten tac gia: ");
	fflush(stdin);
	gets(a.tentacgia);
	printf("Nam xuat ban:");
	scanf("%d",&a.namxb);
	printf("Nha xuat ban: ");
	fflush(stdin);
	gets(a.nhaxb);
	printf("Gia ban:");
	scanf("%d",&a.giaban);
	printf("So luong ban :");
	scanf("%d",&a.soluongban);

}
void Xuatsach(Sach a){
	printf("\nTen sach:%s",a.tensach);
	printf("\nTen tac gia:%s",a.tentacgia);
	printf("\nNam xuat ban:%d",a.namxb);
	printf("\nNha xuat ban:%s",a.nhaxb);
	printf("\nGia ban:%d",a.giaban);
	printf("\nSo luong ban:%d",a.soluongban);
	int s=0;
	s=a.giaban*a.soluongban;
	printf("\nTien ban sach:%d",s);
}
void NhapDSS(Sach a[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap Sach thu %d\n",i+1);
		Nhapsach(a[i]);
	}
}
int insach(Sach a[], int n){
	for(int i=0;i<n;i++){
		if(a[i].giaban>100.000)
		return i;
	}
	return -1;
}
int main () {

	int n;
	Sach a[50];
	printf("\nNhap so luong Sach trong ds: ");
	scanf("%d",&n);
	NhapDSS(a,n);
	printf("%d",insach(a,n));
	return 0;
}
	
