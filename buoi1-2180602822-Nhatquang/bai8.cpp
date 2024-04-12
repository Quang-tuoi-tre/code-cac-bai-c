#include<stdio.h>

int main(){

  float a,b,x;
  printf("\nNhap he so a: ");
  scanf("%f",&a);
  printf("\nNhap he so b: ");
  scanf("%f",&b);
  if(a==0){      
    if(b==0){    
      printf("\nPhuong trinh vo so nghiem\n");
    }else{       
      printf("Phuong trinh vo nghiem");
    }
  }else{     
  	x=-b/a;    
    printf("\nPhuong trinh co nghiem x=%f",x);
  }

  return 0;
}
