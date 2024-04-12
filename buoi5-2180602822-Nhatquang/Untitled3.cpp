#include<stdio.h>
struct DATE{
	int ngay,thang,nam;
};
struct SV{
	char mssv[5];
	int sl;
	int dg;	
};


void docfilesv(SV a[],int &n){
	FILE *f=fopen("DSSV.TXT","rt");
	if(f==NULL){
		printf("Khong the mo duoc file ");
		return;
	}
	fscanf(f,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(f,"%s",&a[i].hoten);
		fscanf(f,"%ld",&a[i].mssv);
		fscanf(f)
	}
}

int main () {
	SV a[100];
	int n;
	
}
