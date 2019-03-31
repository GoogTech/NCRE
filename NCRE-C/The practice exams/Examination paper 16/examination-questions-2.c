/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 22:03:59 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 22:11:22
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是: 根据整型形参'm'的值,计算公式的值: t = 1 - 1/2x2 - 1/3x3 - ··· -1/mxm 
 */

#include <stdio.h>

double fun(int m)
{
    double y = 1.0;
    int i;
    /**************found**************/
    for (i = 2; i <= m; i++) //? 使用'for'循环计算公式,必须计算到'm'.
        /**************found**************/
        y -= 1.0 / (i * i); //?如果除数和被除数都是整数,那么所除结果也是整数,因此应该改为: y-=1.0/(i*i);
    return (y);
}

void main()
{
    int n = 5;

    printf("\nThe result is %lf\n", fun(n));
    getchar();
}

/*The result be shown as followed:

The result is 0.536389

*/
