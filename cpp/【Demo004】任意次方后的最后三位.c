#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#pragma warning(disable:6031 4996)

/*  【任意次方后的最后三位】
        编程求一个整数任意次方后的最后三位数，即求x^y的最后三位数，x和y的值由键盘输入
*/
int main()
{
    int x, y, value, result;

    printf("请输入底数x 和 指数y 的值：");
    scanf("%d%d", &x, &y);

    value = (int)pow(x, y);
    result = value % 1000;
    printf("%d^%d的值为 %d, 最后三位数为 %03d\n", x, y, value, result);
    return 0;
}
