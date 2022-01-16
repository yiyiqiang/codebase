#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*  【判断三角形的类型】
        根据输入的三角形的三条边判断三角形的类型，并输出它的面积和类型。
        首先判断所给的三条边是否能组成三角形，若可以构成三角形，则判断该三角形是什么类型，并求三角形的面积
*/
int main()
{ 
    float a, b, c;
    float s, area;
    scanf("%f%f%f", &a, &b, &c);

    if (a+b>c && b+c>a && a+c>b)
    {
        s = (a + b + c) / 2;
        area = (float)sqrt(s*(s-a)*(s-b)*(s-c));
        printf("面积是：%f\n", area);

        if (a==b && a==c)
        {
            printf("等边三角形\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("等腰三角形\n");
        }
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            printf("直角三角形\n");
        }
        else
        {
            printf("普通三角形");
        }
    }
    else
    {
        printf("不能构成三角形");
    }
    system("pause");
    return 0;
}
