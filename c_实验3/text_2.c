#include <stdio.h>

//这是一个运费计算器

int main()
{
    int s , w , p , f ;
    printf("货物重量：");
    scanf("%d", &w);
    printf("货物距离：");
    scanf("%d", &s);
    printf("货物基本运费：");
    scanf("%d", &p);
    printf("\n");
    if(s<250)
    {
        f = 100;
    }
    if(s>=250 && s<500)
    {
        f = 98;
    }
    if(s>=500 && s<1000)
    {
        f = 95;
    }
    if(s>=1000 && s<2000)
    {
        f = 92;
    }    
    if(s>=2000 && s<3000)
    {
        f = 90;
    }
     if(s>=3000)
    {
        f = 85;
    }  
    printf("折扣是：%f",(float)0.01*f); 
    printf("\n");  
    printf("运费是：%f",0.01*p*w*s*f);
}