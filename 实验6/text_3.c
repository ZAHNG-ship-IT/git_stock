#include <stdio.h>

// 函数声明
void selection_sort(int arr[], int size);

int main() {
    int arr[10];

    // 输入数组元素
    printf("请输入10个整数：\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // 调用排序函数
    selection_sort(arr, 10);

    // 输出排序结果
    printf("排序后的数组为：\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// 选择排序函数实现
void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_index = i;

        // 找到未排序部分最小元素的下标
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // 将找到的最小元素与第一个未排序元素交换
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}