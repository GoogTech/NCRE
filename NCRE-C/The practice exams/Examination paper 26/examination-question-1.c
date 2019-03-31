/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 13:54:14 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 14:05:31
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 在任意'fun'的功能是:在任意给定的'9'个正整数中找出按升序排列时处于中间的数.将原数据序列中比该中间数小的数用该中间数替换.
 * 位置不变,在主函数中输出处理后的数据序列,并将中间数作为函数值返回. 
 */

#include <stdio.h>
#include <stdlib.h>
#define N 9

int fun(int x[])
{
    int i, j, k, t, mid, b[N];

    for (i = 0; i < N; i++)
        b[i] = x[i];

    for (i = 0; i <= N / 2; i++)
    {
        k = i;
        for (j = i + 1; j < N; j++)
            if (b[k] > b[j])
                k = j;
        if (k != i)
        {
            /**********found**********/
            t = b[i];
            b[i] = b[k];
            b[k] = t;
        }
    }
    /**********found**********/
    mid = b[N / 2]; //? 元素'mid'存放中间位置的数,数组长度为'9',因此中间元素数为:'b[4]'. or: mid = b[4]
    for (i = 0; i < N; i++)
        /**********found**********/
        if (x[i] < mid)
            x[i] = mid;

    return mid;
}

void main()
{
    int i, x[N] = {1, 5, 7, 23, 87, 5, 8, 21, 45};

    for (i = 0; i < N; i++)
        printf("%d ", x[i]);

    printf("\nThe mid data is: %d\n", fun(x));
    for (i = 0; i < N; i++)
        printf("%d ", x[i]);

    printf("\n");
    system("pause");
}

/*The result be shown as followed:

1 5 7 23 87 5 8 21 45
The mid data is: 8
8 8 8 23 87 8 8 21 45
Press any key to continue . . .

*/