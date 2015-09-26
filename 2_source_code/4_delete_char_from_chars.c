#include <stdio.h>
/* 从字符串s中删除字符c： 原理就是遍历字符串，把不是c的字符保存到另一个新数组中。 */
void delete_char_from_chars(char s[], int c);

void main()
{
    char c = 'Y';
    char s[] = "Linx XiaoYLong";

    delete_char_from_chars(s, c);
    printf("%s \n", s);
}

void delete_char_from_chars(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) 
        if (s[i] != c)
            s[j++] = s[i];

    s[j] = '\0'; // 补上字符数组结束标识符
}
