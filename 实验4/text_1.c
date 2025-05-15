#include <stdio.h>
//输出所有的水仙花数
int main()
{
    int i, j, k;
    for (i = 100; i < 1000; i++)
    {
        j = i / 100;
        k = (i - j * 100) / 10;
        int m = i - j * 100 - k * 10;
        if (j * j * j + k * k * k + m * m * m == i)
            printf("%d\n", i);
    }
    return 0;
}