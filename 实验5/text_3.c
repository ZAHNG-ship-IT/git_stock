#include <stdio.h>

#define m 3  // 行数
#define n 4  // 列数

int main() {
    int matrix[m][n] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int transposedMatrix[n][m];  // 转置后的数组

    // 进行行列交换
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }

    // 输出转置后的数组
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}