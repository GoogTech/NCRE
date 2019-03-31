/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 14:45:55 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 15:13:30
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:在任意给定的'N'个正整数中,从左到右依次逐个取三个数作为一组,按值大小找出该组数的中值,用该中值替换与该数组
 * 对应的原三个数中的中间位置的数,处理后原数列中首尾'2'个数不变,处理后数列在主函数中输出.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

//? 函数'findmid'的功能是:找到'a','b','c'三个数中的中间数,并存放到变量't'中.
int findmid(int a, int b, int c)
{
    int t;
    t = (a > b) ? (b > c ? b : (a > c ? c : a)) : ((a > c) ? a : ((b > c) ? c : b));
    /**********found**********/
    return t;
}

void fun(int x[])
{
    int i, a, b, c, t[N];
    /**********found**********/
    for (i = 0; i < N; i++)
        t[i] = x[i];

    for (i = 0; i < N - 2; i++)
    {
        a = t[i];
        b = t[i + 1];
        c = t[i + 2];
        /**********found**********/
        x[i + 1] = findmid(a, b, c);
    }
}

void main()
{
    int i, x[N] = {6, 5, 7, 23, 18, 5, 8, 21, 45, 38};

    for (i = 0; i < N; i++)
        printf("%d ", x[i]);
    printf("\n");

    fun(x);
    for (i = 0; i < N; i++)
        printf("%d ", x[i]);

    printf("\n");
    system("pause");
}

/*The result be shown as followed:

6 5 7 23 18 5 8 21 45 38
6 6 7 18 18 8 8 21 38 38
Press any key to continue . . .

*/