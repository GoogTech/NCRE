/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 19:10:10 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 19:25:05
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:用函数指针指向要调用的函数,并进行调用.规定在'[2]'处使'f'指向函数'f1',在'[3]'处使'f'指向函数'f2'.
 * 当调用正确时,程序输出: x1=5.000000, x2=3.000000, x1*x1+x1*x2=40.000000.
 */

#include <stdio.h>

double f1(double x)
{
    return x * x;
}
double f2(double x, double y)
{
    return x * y;
}
double fun(double a, double b)
{
    /**********found**********/
    //? (*f)()代表一个指向函数的指针变量,而本题所调用的'f1','f2'两门函数的返回值均为'double'类型,
    double (*f)();
    double r1, r2;

    /**********found**********/
    f = f1; //[2]
    r1 = f(a);

    /**********found**********/
    f = f2; //[3]
    r2 = (*f)(a, b);

    return r1 + r2;
}
void main()
{
    double x1 = 5, x2 = 3, r;

    r = fun(x1, x2);
    printf("\nx1=%f,  x2=%f,  x1*x1+x1*x2=%f\n", x1, x2, r);

    getchar();
}

/*The result be shown as followed:

x1=5.000000,  x2=3.000000,  x1*x1+x1*x2=40.000000

*/