#include<stdio.h>
int main () {
	int ngay, thang, nam;
	printf("Nhap ngay thang nam: ");
	scanf("%d%d%d", &ngay, &thang, &nam);
	switch (thang){
		case 1: case 3:case 5:case 7:case 8:case 10:case 12:
		if( ngay>0 && ngay<=31){
		printf("Ngay %d thang %d nam %d hop le\n ",ngay, thang, nam); break;
		}else{
			printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam);break;
		}
		case 4:	case 6:case 9:case 11:
		if(ngay>0 && ngay<=30){
		printf("Ngay %d thang %d nam %d hop le\n",ngay, thang, nam); break;
		}else{
		printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam); break;}
		case 2:
		if(ngay>0 && ngay<=29 && nam %4 ==0 && nam % 100!=0 || nam % 400 ==0){
		printf("Ngay %d thang %d nam %d hop le\n",ngay, thang, nam); break;	
			}else{
		printf("Ngay %d thang %d nam %d khong hop le\n", ngay, thang, nam); break;
		}
		default: printf("\n Khong co  ngay %d thang %d nam %d nay ", ngay, thang, nam);

	}
	return 0;
}
