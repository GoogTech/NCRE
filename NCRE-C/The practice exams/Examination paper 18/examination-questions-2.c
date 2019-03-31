/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 10:36:32 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 10:46:48
 */

/*
 * 程序填修改-题目描述如下所示:
 * 
 * 函数'fun'的功能是: 求出分数的列的前'n'项之和: 2/1,3/2,5/3,13/8,21/13...
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*************found**************/
double fun(int n)
{
    int a, b, c, k;
    double s = 0.0;
    a = 2;
    b = 1;

    for (k = 1; k <= n; k++)
    {
        /*************found**************/
        s = s + (double)a / b;
        c = a;
        a = a + b;
        b = c;
    }

    return s;
}

void main()
{
    int n = 5;
    system("CLS");
    printf("\nThe value of function is:%lf\n", fun(n));

    system("pause");
}

/*The result be shown as followed:

The value of function is:8.391667
Press any key to continue . . .

*/
