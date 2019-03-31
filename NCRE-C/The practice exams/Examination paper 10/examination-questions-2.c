/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 18:35:58 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 18:47:23
 */

/*
 * 程序修改题-题目描述如下: 
 * 
 * 函数'fun'的功能是: 传入一个整数'm',计算如下公式的值: t = 1/2 - 1/3 - ··· - 1/m.
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
double fun(int m)
{
    double t = 1.0;
    int i;
    for (i = 2; i <= m; i++)
    {
        /*************found**************/
        t -= 1.0 / i;
        /*************found**************/
    }
    return t;
}
void main()
{
    int m;

    system("CLS");
    printf("\nPlease enter 1 integer numbers:\n");
    scanf("%d", &m);

    printf("\n\nThe result is %1f\n", fun(m));

    system("pause");
}

/*The result be shown as followed: 

Please enter 1 integer numbers:
5

The result is -0.283333
Press any key to continue . . .

*/