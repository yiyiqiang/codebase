#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*  ���ж������ε����͡�
        ��������������ε��������ж������ε����ͣ������������������͡�
        �����ж��������������Ƿ�����������Σ������Թ��������Σ����жϸ���������ʲô���ͣ����������ε����
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
        printf("����ǣ�%f\n", area);

        if (a==b && a==c)
        {
            printf("�ȱ�������\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("����������\n");
        }
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            printf("ֱ��������\n");
        }
        else
        {
            printf("��ͨ������");
        }
    }
    else
    {
        printf("���ܹ���������");
    }
    system("pause");
    return 0;
}
