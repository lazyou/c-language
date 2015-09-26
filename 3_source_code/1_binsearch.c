#include <stdio.h>

/*
二分法查找数组v中元素x的位置，无则返回-1。
注意：
    v[] 必须是已按升序排序的数组；
    n 是数组v的产度。

原理：
    从中间元素比较大小， 根据大小决定比较的走向（左或右）。
*/

int binsearch(int x, int v[], int n);

void main()
{
    int x = 5; // 是否存在此元素
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10, 11, 12}; // 必须是已排序的数组
    int n = 12; // 数组长度
    int result = 0;

    result = binsearch(x, v, n);
    
    if (result == -1) 
        printf("v[] 没有查找到 x \n");
    else 
        printf("x的位置在 ： %d \n", result);
}

int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (x < v[mid]) 
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else // 找到匹配值
            return mid;
    }

    return -1; // 找不到
}
