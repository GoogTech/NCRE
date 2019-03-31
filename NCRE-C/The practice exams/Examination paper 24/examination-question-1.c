/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 21:25:35 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 21:31:32
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:根据形参'i'的值返回某个函数的值.当调用正确时,程序输出: x1=5.000000,x2=3.000000,x1*x1+x1*x2=40.000000.
 */

#include <stdio.h>
#include <stdlib.h>

double f1(double x)
{
    return x * x;
}

double f2(double x, double y)
{
    return x * y;
}

/**********found**********/
double fun(int i, double x, double y)
{
    if (i == 1)
        /**********found**********/
        return f1(x);
    else
        /**********found**********/
        return f2(x, y);
}

void main()
{
    double x1 = 5, x2 = 3, r;
    r = fun(1, x1, x2);
    r += fun(2, x1, x2);
    printf("\nx1=%f, x2=%f, x1*x1+x1*x2=%f\n\n", x1, x2, r);

    system("pause");
}

/*The result be shown as followed:

x1=5.000000, x2=3.000000, x1*x1+x1*x2=40.000000

Press any key to continue . . .

*/
