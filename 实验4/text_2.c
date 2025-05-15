#include <stdio.h>
//输入一行字符，分别统计中的字母、数字、空格和其他字符的个数
int main()
{
    char c;
    int letter = 0, digit = 0, space = 0, other = 0;
    printf("请输入一行字符：\n");
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            letter++;
        else if (c >= '0' && c <= '9')
            digit++;
        else if (c == ' ')
            space++;
        else
            other++;
    }
    printf("字母个数：%d\n数字个数：%d\n空格个数：%d\n其他字符个数：%d\n", letter, digit, space, other);
    return 0;
}   
