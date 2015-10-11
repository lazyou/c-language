#include <stdio.h>
#include <string.h>

void _reverse(char s[]);

main()
{
    char s[] = "long";
    _reverse(s);
    return 0;
}

void _reverse(char s[])
{
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    for (i = 0, j = strlen(s) ; i < j; i++) {
        printf("%c", s[i]);
    }

    printf("\n");
}

