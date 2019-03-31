/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 15:36:40 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 15:51:46
 */

/*
 * 程序修改题-题目如下:
 * 
 * 函数'fun'的功能是:统计's'所指一维数组中'0'的个数(存在变量'zero'中)和'1'的个数(存在变量'one'中),并输出结果. 
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int *s, int n)
{
    /**********found**********/
    int i, one = 0, zero = 0;

    for (i = 0; i < n; i++)
        /**********found**********/
        switch (s[i])
        {
            /**********found**********/
        case 0:
            zero++;
            break;
        case 1:
            one++;
        }
    printf("one : %d    zero : %d\n", one, zero);
}

void main()
{
    int a[20] = {1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0}, n = 20;
    fun(a, n);

    system("pause");
}

/*

one : 9    zero : 11
Press any key to continue . . .

*/