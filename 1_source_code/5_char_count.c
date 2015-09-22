#include <stdio.h>

main()
{
    int c;
    long nc;

    nc = 0;
    while ((c=getchar()) != EOF) {
    	++nc;
        putchar(c);
        printf("\n");
    }

    printf("%ld \n", nc);
}
