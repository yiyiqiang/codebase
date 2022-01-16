#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996 6031)

/*  【打渔晒网问题】
        如果一个渔夫从2011年1月1日开始每三天打一次渔，两天晒一次网
        编程实现当输入2011年1月1日以后的任意一天，输出该渔夫是在打渔还是在晒网
*/
int leap(int year);
int since2011(int year, int month, int day);

int main()
{
    int year, month, day;
    printf("请分别输入年、月、日，（形如：2012 4 2）：");
    scanf("%d%d%d", &year, &month, &day);
    int days = since2011(year, month, day);
    int value = days % 5;
    switch (value)
    {
    case 1:
    case 2:
    case 3:
        printf("%d年%d月%d日，渔夫在打渔", year, month, day);
        break;
    case 4:
    case 0:
        printf("%d年%d月%d日，渔夫在晒网", year, month, day);
        break;
    }
    return 0;
}


int since2011(int year, int month, int day)
{
    int result = 0;
    switch (month) {
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
        if (leap(year))
        {
            result += 29;
        }
        else
        {
            result += 28;
        }
    case 2:
        result += 31;
    case 1:
        result += day;
    }

    for (int i=2011; i<year; i++)
    {
        if (leap(year-2011))
        {
            result += 366;
        }
        else
        {
            result += 365;
        }
    }

    return result;
}

/*
    返回值：1：闰年 0：平年
*/
int leap(int year)
{
    if ((0 == year % 4) && (0 != year % 100) || (0 == year % 400))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
