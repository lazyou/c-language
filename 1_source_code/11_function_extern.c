#include <stdio.h>

#define MAXLINE 1000

int get_line(void);
void copy(void);

main()
{
    int len;
    int max;
    char longest[MAXLINE];

    max = 0;
    while ((len = get_line()) > 0)
        if (len > max) {
            max = len;
            copy();
        }

    if (max > 0)
        printf("%s", longest);

    return 0;
}

int get_line(void)
{
    int c, i;
    char line[MAXLINE];

    for (i=0; i< MAXLINE-1 
        && (c=getchar()) != EOF 
        && c!='\n'; ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void copy(void)
{
    int i;
    char line[MAXLINE], longest[MAXLINE];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}

