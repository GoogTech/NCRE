/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 10:13:01 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 11:20:42
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:计算'x'所指数组中'N'个数的平均值(规定所有数均为正数),平均值通过形参返回给主函数,将小于平均值且最接近平均值的数
 * 作为函数值返回,并在主函数中输出.
 * 例如,有十个正数:46,30,32,40,6,17,45,15,48,26,平均值为：30.5000000.
 * 主函数中输出'm = 30'.
 */

#include <stdlib.h>
#include <stdio.h>
#define N 10
double fun(double x[], double *av)
{
    int i, j;
    double d, s;
    s = 0;
    for (i = 0; i < N; i++)
        s = s + x[i];
    /**********found**********/
    *av = s / N;
    d = 32767; //flag
    for (i = 0; i < N; i++)
        if (x[i] < *av && *av - x[i] <= d)
        {
            /**********found**********/
            d = *av - x[i];
            j = i;
        }
    /**********found**********/
    return x[j];
}
void main()
{
    int i;
    double x[N], av, m;
    for (i = 0; i < N; i++)
    {
        x[i] = rand() % 50;
        printf("%4.0f ", x[i]);
    }
    printf("\n");

    m = fun(x, &av);
    printf("\nThe average is: %f\n", av);
    printf("m=%5.1f ", m);
    printf("\n");

    getchar();
}

/*The result be shown as followed:

41   17   34    0   19   24   28    8   12   14

The average is: 19.700000
m= 19.0

*/