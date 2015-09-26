#include <stdio.h>
/* 字符转小写 */
void main()
{
    char c = 'H';
    char lower_c;

    lower_c = char_to_lower(c);
    printf("%c \n", lower_c);
}

int char_to_lower(int c)
{
    if (c >= 'A' && c <='Z') // 大写字符才转
        return c + ('a' - 'A'); // 'a' - 'A' 得到大小写asci码之间的值（固定的，为32）
    else 
        return c;
}
