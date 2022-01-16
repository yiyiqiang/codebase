#include<stdio.h>
#include<stdlib.h>

/*  【阳阳买苹果】
        阳阳买苹果，每个苹果0.8元，阳阳第一天买两个苹果，第二天开始每天买前一天的两倍
        直到购买的苹果个数为不超过100的最大值，编程求阳阳每天平均花多少钱？
*/
int main()
{
    int n = 2, day = 0;
    float money = 0, avg;
    while (n < 100)
    {
        money += 0.8 * n;
        day++;
        n *= 2;
    }
    avg = money / day;
    printf("阳阳每天平均花 %f\n", avg);  // 阳阳每天平均花 16.799999
    return 0;
}
