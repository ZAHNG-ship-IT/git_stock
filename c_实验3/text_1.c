#include <stdio.h>

int year_judge;
int main() {
    printf("请输入要判断的年份：");
    scanf("%d", &year_judge);
    if (year_judge % 4 == 0 && year_judge % 100 != 0 || year_judge % 400 == 0) {
        printf("是闰年\n");
    } else {
        printf("是平年\n");
    }

    return 0;
}