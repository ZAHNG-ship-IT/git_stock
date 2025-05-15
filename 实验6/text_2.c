#include <stdio.h>
int max(int a[]);
int main() {

    int a[10]= {1,5,5,9,8,6,5,10,10};
    int b;
    b = max(a);
    printf("最大值为：%d\n", b);
    for(int j=0;j<10;j++)
    {
        if(b== a[j])
        {
            printf("最大值的下标为：%d\n", j);
        }
    }
    return 0;
}   

int max(int a[])
{
    int max = a[0];
    for (int i = 1; i < 10; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;

}