#include<stdio.h>
void main()
{
  int a=10,b=15,total;
    a=10;
    printf("%d", a);
    
    
    total=a+b;
    printf("total is:%d \n",total);
    
    total=a-b;
    printf("total is:%d \n",total);
    
    total=a*b;
    printf("total is:%d \n",total);
    
    total=a/b;
    printf("total is:%d \n",total);
    
    
   
    printf("%d=%d=%d",a==b,a,b);
    printf("\n %d=%d!=%d",a!=b,a,b);
    printf("\n %d=%d<%d",a<b,a,b);
    printf("\n %d=%d>%d",a>b,a,b);
    printf("\n %d=%d<=%d",a>=b,a,b);
    printf("\n %d=%d>=%d",a>=b,a,b);
    
   
}

