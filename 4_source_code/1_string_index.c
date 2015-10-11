#include <stdio.h>

int string_index(char source[], char searchfor[]);

// 返回t在s中的位置， 若没找到则返回-1
int string_index(char s[], char t[])
{
    int i, j , k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;

        if (k > 0 && t[k] == '\0' ) 
            return i;
    }

    return -1;
}