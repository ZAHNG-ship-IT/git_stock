#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d * %d = %2d\t", i, j, i * j); // 格式化输出，%2d保持对齐
        }
        printf("我\n"); // 每行结束后换行
    }

    return 0;
}