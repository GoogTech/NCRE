/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 18:21:29 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 18:30:37
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能为:计算并输出'k'以内最大的'10'个能被'13'或'17'整除的自然数之和,'k'的值有主函数传入.
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int fun(int k)
{
    int m = 0, mc = 0;

    while ((k >= 2) && (mc < 10))
    {
        /*************found**************/
        if ((k % 13 == 0) || (k % 17 == 0))
        {
            m = m + k;
            mc++;
        }
        k--;

        /*************found**************/
    }
    return m;
}

void main()
{
    system("CLS");
    printf("%d\n ", fun(500));
    system("pause");
}

/*The result be shown as followed:

4622
 Press any key to continue . . .

*/