/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 11:22:08 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 11:28:59
 */

/* 
 * 题目修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:根据整型形参'n',计算如下公式值: A1 = 1, A2 = 1/1+A1, A3 = 1/1+A2, ··· , An = 1/1+A(n-1).
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
/*************found**************/
float fun(int n)
{
    float A = 1;
    int i;
    /*************found**************/
    for (i = 2; i <= n; i++) //! (i<=n) For example:input 2.
    {
        A = 1.0 / (1 + A);
    }
    return A;
}

void main()
{
    int n;
    system("CLS");

    printf("\nPlease enter n: ");
    scanf("%d", &n);

    printf("A%d=%lf\n", n, fun(n));

    system("pause");
}

/*The result be showed as followed: 

Please enter n: 10
A10=0.617977
Press any key to continue . . .

*/