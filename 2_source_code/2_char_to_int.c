#include <stdio.h>
/* 字符串数字转为对应的int数值 */
void main()
{
    int str_int = 0;
    //char s[] = "lin林"; 
    char s[] = "123";

    str_int = char_to_int(s);
    printf("%d \n", str_int);
}

int char_to_int(char s[])
{
    int i, n;

    n = 0;
    // '0' 表示0的字符，对应asci码 48 
    for( i = 0; s[i] >= '0' && s[i] <= '9'; ++i) 
        n = 10 * n + (s[i] - '0');  // 计算出 s[i]中存储的字符所对应的数字值

    return n;
}
