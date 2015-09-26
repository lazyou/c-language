#include <stdio.h>

void main()
{
    int length = 0;
    char s[] = "lin林"; // 中文“林”占了 3 个字符。
    // char s[] = "lin"; // 返回长度3

    length = str_len(s);
    printf("字符数组长度位 ： %d \n", length);
}

int str_len(char s[])
{
    int i = 0;

    while(s[i] != '\0') // 字符数组结束符 ： '\0'
        ++i;

    return i;
}
