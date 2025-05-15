#include <stdio.h>

int main()
{
    int i, j, temp;
    int a[10] = {9, 895 , 5454, 635, 5, 465, 3, 2, 1, 0};
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (a[j] < a[j +1])
            {
                temp = a[j]; 
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }   
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }   


}