#include <stdio.h>

int arr[10] = {51, 27, 33,44, 65, 76, 87, 98, 109, 1010};

int main()
{

    int i, j, temp;
    printf("排序前的数组为：");   
    for(int a =0; a < 10; a++ )
    {
        printf("%d ", arr[a]);
    }
    printf("\n");
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("排序后的数组为：");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}