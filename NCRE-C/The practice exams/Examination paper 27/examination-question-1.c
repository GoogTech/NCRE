/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 14:29:56 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 14:45:53
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:输出'a'所指数组中前'n'个数据并要求每行输出'5'个数
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        /**********found**********/
        if (i % 5 == 0)
            /**********found**********/
            printf("\n");
        /**********found**********/
        printf("%d  ", a[i]);
    }
}

void main()
{
    int a[100] = {0}, i, n = 22;

    for (i = 0; i < n; i++)
        a[i] = rand() % 21;

    fun(a, n);
    printf("\n");
    system("pause");
}

/*The result be shown as followed:

20  8  13  19  17
16  12  0  19  20
14  5  13  6  7
8  13  14  18  18
9  9
Press any key to continue . . .

*/
