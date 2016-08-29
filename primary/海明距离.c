#include <stdio.h>
/*
介绍
海明距离是在二进制情况下，一个整数变成另外一个整数需要翻转的位数。比如2转换成3需要翻转1位，所以2到3 的距离是1。
给你两个正整数x和y，（x，y<=1,000,000,000）求它们的海明距离。

过程
把两个十进制数转化成相应的二进制数，然后比较，若不同则k加1，最后输出结果k。

时间复杂度
O(n)
空间复杂度
O(1)
*/
