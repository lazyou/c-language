#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int max);
int str_index(char source[], char searchfor[])

char pattern[] = "ould";

main()
{
    char line[MAXLINE];
    int found = 0;

    while (get_line(line, MAXLINE) > 0) {
        if (str_index(line, pattern) > = 0) {
            printf("%s", line);
            found++;
        }
    }

    return found;
}

int get_line(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c!='\n') {
        s[i++] = c;
    }

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    
    return i;
}

int str_index(char s[]. char t[])
{
    int i, j , k;


}

