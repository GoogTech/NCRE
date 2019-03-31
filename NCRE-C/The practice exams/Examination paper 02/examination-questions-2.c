/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 09:18:53 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 09:28:26
 */

/*
 * 程序改错题-题目描述如下: 
 * 
 * 函数'fun'的功能是: 根据整型参数'm',计算公式的值: y = 1/100*100 + 1/200*200 + 1/300*300 + ··· 1/m*m.
 * 例如：若'm = 2000',应该输出'0.000160'.
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
/*************found**************/
double fun(int m) //! double
{
    double y = 0, d;
    int i;
    /*************found**************/
    for (i = 100; i <= m; i += 100)
    {
        d = (double)i * (double)i;
        y += 1.0 / d; //! y += 1.0/d
    }
    return (y);
}
void main()
{
    int n = 2000;
    system("CLS");
    printf("\nThe result is %1f\n", fun(n));

    system("pause");
}
