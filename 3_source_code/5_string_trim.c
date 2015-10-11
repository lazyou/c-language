#include <stdio.h>
#include <string.h>

int trim(char s[]);

// 删除字符从尾部的空格、制符表、换行符
int main()
{
    char s[] = "  lin XL  ";
    trim(s);
    return 0;
}

int trim(char s[])
{
    int n, i;

    for (n = strlen(s) - 1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;

    s[n+1] = '\0'; // 重点还是要理解'\0'是字符串的结尾。

    for (n = strlen(s), i = 0; i < n; i++)
        printf("%c", s[i]);

    printf("\n");

    return 0;
}
