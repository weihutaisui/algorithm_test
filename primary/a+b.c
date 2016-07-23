#include <stdio.h>
/*
介绍
计算a+b的值。a,b的数据范围为2^31-1。
若超出此范围，则题目转换为大数问题，需要寻求另外的数据结构进行计算，这里不再介绍。

过程
输入a和b，并输出他们的和。

时间复杂度
O(1)
空间复杂度
O(1)
*/

int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    printf("a+b=%d\n",a+b);

    return 0;
}
