#include <stdio.h>
/*
介绍
一个王子被巫师诅咒，编程一只青蛙。500年后的一天，青蛙王子碰到了一个仙女，仙女告诉他，如果他能够通过一个简单的测试，她就能帮他接触诅咒。
测试是这样子的，仙女要青蛙王子在一条直线上跳跃（青蛙王子最开始在坐标为0的地方），但只能她给定的两种长度跳跃（假设着两种长度王子都能跳到），可以往前或者往后跳，如果能达到指定的地点，那么就通过测试；仙女给定的方式有多种，但有些是不可能满足达到指定地点的。请你帮助可怜的青蛙王子，寻找出那些可以完成测试的跳跃方式。

过程
输入三个整数，模拟青蛙王子的跳跃规则，满足条件则输出Yes，否则输出No。

时间复杂度
O(n)
空间复杂度
O(1)

*/
int main()
{
    unsigned int a,b,c,temp,min;

    while(scanf("%u %u %u",&a,&b,&c),a!=0||b!=0||c!=0)
    {
        if(a==0&&b==0)
        {
            printf("No\n");
            continue;
        }

        if(b>a)
        {
            temp = a;
            a = b;
            b = temp;
        }

        if(b==0) { min = a;}
        if(a==b) { min = a;}

        while(a>b&&b!=0)
        {
            temp = a - b;
            if(temp > b)
            {
                a = temp;
            }
            else if(temp < b)
            {
                a=b;
                b=temp;
            }
            else
            {
                min = temp;
                break;
            }
        }

        if((c%min)==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
