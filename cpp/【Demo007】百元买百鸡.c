#include<stdio.h>
#include<stdlib.h>

/*  【百元买百鸡】
        中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买百鸡问题”
        鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？
*/
int main()
{
    int cock, hen, chick;
    for (cock=0; cock<=20; cock++)
    {
        for (hen=0; hen<=33; hen++)
        {
            for (chick=0; chick<=99; chick++)
            {
                if (5*cock + 3*hen + chick/3 == 100)
                {
                    if (cock + hen + chick == 100)
                    {
                        if (chick % 3 == 0)
                        {
                            printf("公鸡：%d 母鸡：%d 小鸡：%d\n", cock, hen, chick);
                        }
                    }
                }
            }
        }
    }
    return 0;
}

/*
公鸡：0 母鸡：25 小鸡：75
公鸡：4 母鸡：18 小鸡：78
公鸡：8 母鸡：11 小鸡：81
公鸡：12 母鸡：4 小鸡：84
*/
