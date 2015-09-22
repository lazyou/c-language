#include <stdio.h>

main()
{
    int c;
    
    c = getchar();
    while (c != EOF) {
	    printf("get \n");
        putchar(c);
	    c = getchar();
    }
}
