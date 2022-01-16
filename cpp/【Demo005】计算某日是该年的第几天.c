#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:6031 4996)

/*  【计算某日是该年的第几天】
        用户从键盘中输入年、月、日，在屏幕中输出此日期是该年的第几天
*/
int main()
{
    int year, month, day;
    printf("请分别输入年月日：");
    scanf("%d%d%d", &year, &month, &day);

    int result = 0;
    
    switch(month) {
    case 12:
        result += 30;
    case 11:
        result += 31;
    case 10:
        result += 30;
    case 9:
        result += 31;
    case 8:
        result += 31;
    case 7:
        result += 30;
    case 6:
        result += 31;
    case 5:
        result += 30;
    case 4:
        result += 31;
    case 3:
        if ((0 == year % 4) && (0 != year % 100) || (0 == year % 400))
        {
            result += 29;
        }else
        {
            result += 28;
        }
    case 2:
        result += 31;
    case 1:
        result += day;
    }
    printf("%d年%d月%d日是这一年的 %d 天\n", year, month, day, result);
    /*
        请分别输入年月日：2011 11 24 ↙
        2011年11月24日是这一年的 328 天
    */
    return 0;
}
