#include <stdio.h>

int get_line(char line[], int max);

// 将行保存到s中，并返回该行的长度
int get_line(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n') { // 【表示对 getchar() 一回车就执行。如何在命令行敲出段落的效果？】
        s[i++] = c;
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    
    return i;
}