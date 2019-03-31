/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 15:31:26 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 21:58:56
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 已知一个数列从'0'项开始的前'3'项: 0,0,1,以后的各项都是其相邻的前'3'项之和.
 * 函数'fun'的功能是:计算并输出该数列前'n'项的平方根之和'sum'.'n'的值通过形参传入.
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

/*************found**************/
double fun(int n)
{
    double sum, s0, s1, s2, s;
    int k;
    sum = 1.0;
    if (n <= 2)
        sum = 0.0;
    s0 = 0.0;
    s1 = 0.0;
    s2 = 1.0;
    for (k = 4; k <= n; k++)
    {
        s = s0 + s1 + s2;
        sum += sqrt(s);
        s0 = s1;
        s1 = s2;
        s2 = s;
    }
    /*************found**************/
    return sum;
}

void main()
{
    int n;
    system("CLS");
    printf("Input  N=");
    scanf("%d", &n);
    printf("%f\n", fun(n));

    system("pause");
}

/*The result be shown as followed:

Input  N=10
23.197745
Press any key to continue . . .

*/