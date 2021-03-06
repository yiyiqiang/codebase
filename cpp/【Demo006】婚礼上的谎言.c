#include<stdio.h>
#include<stdlib.h>

/*  【婚礼上的谎言】
         3对情侣参加婚礼，3个新郎为A、B、C，3个新娘为X、Y、Z
         有人想知道究竟谁与谁结婚，于是就问新人中的三位，得到如下结果：
         A说他将和X结婚；X说她的未婚夫是C；C说他将和Z结婚
         这人事后知道他们在开玩笑，说的全是假话。那么，究竟谁与谁结婚呢？
    【思路】
        用“a＝1”表示新郎A和新娘X结婚，同理如果新郎A不与新娘X结婚则写成“a!＝1”
        根据题意得到如下表达式：
            a!＝1　A不与X结婚
            c!＝1　C不与X结婚
            c!＝3　C不与Z结婚
        隐含条件：3个新郎不能互为配偶，即 a!＝b 且 b!＝c 且 a!＝c
        穷举所有可能的情况，代入上述表达式进行推理运算
*/
int main()
{
    int a, b, c;
    for (a=1; a<=3; a++)
    {
        for (b=1; b<=3; b++)
        {
            for (c=1; c<=3; c++)
            {
                if (a!=1 && c!=1 && c!=3 && a!=b && a!=c && b!=c)
                {
                    printf("%c 将嫁给 A\n", 'X' + a - 1);
                    printf("%c 将嫁给 B\n", 'X' + b - 1);
                    printf("%c 将嫁给 C\n", 'X' + c - 1);
                }
            }
        }
    }
    /*
        Z 将嫁给 A
        X 将嫁给 B
        Y 将嫁给 C
    */
    return 0;
}
