#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>

/*
    需求：3个数由小到大排序
*/
int main()
{
    int a, b, c;
    printf("Please input a,b,c: \n");
    scanf("%d%d%d", &a, &b, &c);
    
    if (a > b)
    {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }
    if (a > c)
    {
        a = a ^ c;
        c = a ^ c;
        a = a ^ c;
    }
    if (b > c)
    {
        b = b ^ c;
        c = b ^ c;
        b = b ^ c;
    }
    
    printf("The order of the number is: ");
    printf("%d, %d, %d\n", a, b, c);
    return 0;
}
