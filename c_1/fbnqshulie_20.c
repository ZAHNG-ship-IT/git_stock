#include <stdio.h>

int a[20]={1,1};

int main()
{

    printf("斐波那契数列前20项为:");
    for(int i=2;i<20;i++)
    {
        a[i]=a[i-1]+a[i-2]; 
    }
    for(int i=0;i<20;i++)
    {
        printf("  %d",a[i]);
    }
    return 0;

}
