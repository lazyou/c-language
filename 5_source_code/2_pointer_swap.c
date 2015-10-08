#include <stdio.h>

void swap(int *px, int *py);

int main()
{
    int x = 1;
    int y = 5;

    swap(&x, &y);

    printf("x = %d \n", x);
    printf("y = %d \n", y);

    return 0;
}

void swap(int *px, int *py)
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}
