#include <stdio.h>

int main()
{
    int y;
    float x;
    scanf("%f", &x);

    if(x<0)
        y=-1;
    if(x==0)
        y=0;
    if(x>0) 
        y=1;

    printf("%d", y);



}