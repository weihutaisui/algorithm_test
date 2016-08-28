#include<stdio.h>
#include<stdlib.h>
/*
介绍
如果一个三位数的每个数位的三次方和就是本身，那么我们称这种数位“水鲜花数”。

过程
遍历100-999所有的数，找出所有的“水鲜花数”，并输出！

时间复杂度
O(n-m)
空间复杂度
O(1)
*/

int isYes(int n)
{
    int i,j,k;

    i=n/100;//i-百位
    j=n/10%10;//j-十位
    k=n%10;//k-个位

    if(n == i*i*i+j*j*j+k*k*k) //判断
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{
    int i,m,n,flag;

    //while(scanf("%d%d",&m,&n)!=EOF)
    //{
        flag = 0;

        for(i=100;i<=999;i++)
        {
            if(isYes(i))
            {
                if(flag == 0)
                {
                    flag = 1;
                }
                else
                {
                    printf(" ");
                }

                printf("%d",i);
            }
        }

        if(flag == 0)
        {
            printf("no");
        }

        printf("\n");
    //}

    return 0;
}
