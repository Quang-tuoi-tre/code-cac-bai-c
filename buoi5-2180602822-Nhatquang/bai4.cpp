#include<stdio.h>
void xuatten(char a[], int n){
	int i=0;
	int vt=0;
	while(a[i] != '\0'){
		i++;
		if(a[i] ==' ')
		vt =i;
	}
	while (a[vt] != '\0'){
		printf("%c",a[vt]);
		vt++;
	}
	
}
int main () {
	char ten[50];
	printf("Nhap ho va ten: ");
	scanf("%c",&ten,50);
	
	xuatten(ten,50);
		printf("Ten la: ");
	return 0;
}

