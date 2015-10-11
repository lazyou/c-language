#include <stdio.h>

#define MAXLINE 1000 // 最大输入行长度

char pattern[] = "ould"; // 待查询字符串

// 找出所有被匹配中的行
int main()
{
    char line[MAXLINE];
    int found = 0;

    while (get_line(line, MAXLINE) > 0) {
        if (string_index(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    }

    return found;
}