#include <stdio.h>

int main()
{
    int x =1;
    int *ip; // ip是指向int类型的指针
    int *iq;

    ip = &x; // ip指向x

    printf("%p \n", ip); // 打印地址，类似 0x7ffc0bbe2eb4 
    printf("%d \n", *ip);
    
    printf("%d \n", *ip + 2); // &、*运算符优先级高于算术运算符

    (*ip)++; // 通过指针修改x的值
    printf("%d \n", x); // x值被修改，所以函数可以通过接收指针为参数修改函数外的变量
   
    iq = ip; 
    // 指针是变量，可直接使用、赋值。指针iq也指向ip指向的对象。（iq必须也是指向int类型的指针）
    printf("%p \n", iq);     

    return 0;
}
