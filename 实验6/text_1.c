#include <stdio.h>

int main()
{
    int n,i=1;
    scanf("%d", &n);
    if( n<0 )
    {
        printf("输入错误\n");
    }
    else
    {
        if(n == 0)
        {
            printf("n的阶乘为1\n");
        }
        if(n == 1)
        {
            printf("n的阶乘为1\n");
        }
        else
        {
            for(int j=1;j<=n;j++)
            {
                i *= j;
 
            }

        }
            printf("n的阶乘为%d\n", i);

    }
    
    return 0;

}