#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
介绍
给一个字符串，请将其中的英文字母的大小写进行转换。
输入：第一行是一个整数N，表示样例的个数，以后每输入一个字符串。字符串可能由英文字母、数字、各种标点（包括空格）组成，长度不超过200。
输出：每行输出一个转换后的结果。

过程
读取一个字符串，使用for循环一个一个字符进行判断，若为小写，则把其ASCII码减去32变成大写，若为大写则加上32，即可得到相应的大小写字母。

时间复杂度
时间用时取决于需要处理的字符串长度n.
空间复杂度
O(1)
*/

int main()
{
    int i,j,n,len;
    char temp[300],a[300];
    scanf("%d",&n);

    for(j=0;j<=n;j++)
    {
        gets(temp);
        len = strlen(temp);

        for(i=0;i<=len;i++)
        {
            if(temp[i]>='a' && temp[i] <= 'z')
            {
                temp[i]=temp[i]-32;
            }
            else if(temp[i]>='a' && temp[i] <= 'z')
            {
                temp[i]=temp[i]+32;
            }
            else
            {
                temp[i]=temp[i];
            }
        }

        for(i=0;i<len;i++)
        {
            putchar(temp[i]);
        }

        if(j>0)
        {
            printf("\n");
        }
    }
    return 0;
}
