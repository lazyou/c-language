#include <stdio.h>

int power(int m, int n);    // 声明参数类型、名字以及该函数返回结果类型

main()
{
    int i;

    for (i = 0; i < 10; ++i)
	printf("%d %d %d \n",i, power(2, i), power(-3, i));

    return 0;
}

int power(int base, int n)
{
    int i, p;

    for (i=1; i<=n; ++i)
	p = p * base;

    return p;
}
