#include <stdio.h>
// 统计数组、空白符、其他字符
main()
{
    int c, i, nwhite, nother, ndight[10];

    nwhite = nother = 0;
    
    // 初始化数组的值
    for (i = 0; i < 10; i++)
        ndight[i] = 0;

    // 读取每个字节
    while ((c = getchar()) != EOF) {
        switch (c) {
            // 枚举出所有数字字符的情况
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                ndight[c - '0']++;
                break;
            // 所有空白情况
            case ' ': case '\n': case '\t':
                nwhite++;
                break;
            default:
                nother++;
                break;
        }
    }

    printf("digits = ");
    
    for (i = 0; i < 10; i++)
        printf(" %d", ndight[i]);

    printf(", white space = %d, other = %d \n", nwhite, nother);

    return 0;
}
