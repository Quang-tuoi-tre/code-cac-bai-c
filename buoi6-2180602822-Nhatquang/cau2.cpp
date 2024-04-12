#include<stdio.h>
#include<math.h>
void XuatMenu(){
	printf("1: Giai phuong trinh bac 1\n");
	printf("2: Kiem tra so hoan thien\n");
	printf("3: Liet ke so hoan thien trong pham vi tu 1 den n\n ");
	printf("4: Tim uoc chung lon nhat cua hai so nguyen\n");
}
int Giaiptbac1(float a, float b, float &x){
	if(a==0){
		if(b==0)
		return 1;
		return 0;
	}
	x=-b/a;
	return 1;
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
void insohoanthien(int q){
	printf("\nSo hoan thien la: ");
	for(int i=0;i<q;i++){
		if(ktsohoanthien(i)==1){
			printf("%d\t",i);
		}
	}
}
int ucln(int w, int e){
	if(w==0||e==0){
		return w+e;
	}
 while(w!=e){
 	if(w>e){
 		w=w-e;
	 }else{
	 	e=e-w;
	 }
 }
 return w;
}
int main () {
	int g,h;
	int chon;
		XuatMenu();
		
		printf("Hay chon cong viec: ");
		scanf("%d",&chon);
		switch(chon)
		{
		case 1:
			float a,b,x;
			printf("Nhap he so a va b: ");
			scanf("%d%d",&a,&b);
			if(Giaiptbac1(a,b,x)==0){
				printf("Phuong trinh vo nghiem");
			}else if(Giaiptbac1(a,b,x)==1){
				printf("Phuong trinh co mot nghiem %f",x);
				}else{
				printf("Phuong trinh co vo so nghiem");
			}
			break;
		case 2:
			int n;
			printf("Nhap n: ");
			scanf("%d",&n);
				 g=ktsohoanthien(n);
			if(g==0){
			printf("Khong phai la so hoan thien");
				} else{
			printf("La so hoan thien");
		}
			break;
			
			
		case 3:
				int q;
			printf("Nhap n: ");
			scanf("%d",&q);
			insohoanthien(q);
			break;
		case 4:
			int w,e;
			printf("Nhap 2 so a va b: ");
			scanf("%d%d",&w,&e);
			h=ucln(w,e);
			printf("Uoc chung lon nhat 2 so da cho la %",h);

		default: printf("Thoat\n");
	}
	return 0;
}
	
	
	
