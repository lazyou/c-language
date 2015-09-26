#include <stdio.h>
/* 从两个字符串连接 */
void chars_jion(char s[], char t[]);

void main()
{
    char s[] = "Linx XiaoYLong";
    char t[] = "YYYYY";

    chars_jion(s, t);
    printf("%s \n", s);
}

void chars_jion(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0')
        i++;

    while ((s[i++] = t[j++]) != '\0') // 在s长度的后面追加字符串j的内容，
        ;
}
