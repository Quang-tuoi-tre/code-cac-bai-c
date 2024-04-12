#include<math.h>
#include<stdio.h>
int main()
{
    float a,b,c,d,x1,x2,x;
    printf("Nhap vao 3 he so a, b, c: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0)
    {
        if(b==0)
            {
                if(c==0){
				
                    printf("Phuong trinh co vo so nghiem");
                }else
                    printf("Phuong trinh vo nghiem");
            }
        else
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);
    }
    else
    {
        d=b*b-4*a*c;
        x=-b/(2*a);
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        if (d<0)
            printf("Phuong trinh vo nghiem\n");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %f\n",x);
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %f,%f",x1,x2);    
    }    
    return 0;
  
}

