/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 09:09:40 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 09:18:36
 */

/*
 * 程序填空题-题目描述如下:
 *  
 * 函数'fun'的功能是:计算形参x所指数组中N各数的平均值(规定所有数为正数),作为函数值返回,并将大于平均值的数放在形参'y'所指的数组中,在主函数中输出.
 */

#include <stdlib.h>
#include <stdio.h>
#define N 10
double fun(double x[], double *y)
{
    int i, j;
    double av;
    /**********found**********/
    av = 0.0;
    /**********found**********/
    for (i = 0; i < N; i++)
        av = av + x[i] / N; //! Attention
    for (i = j = 0; i < N; i++)
        /**********found**********/
        if (x[i] > av)
            y[j++] = x[i];
    y[j] = -1;
    return av;
}
void main()
{
    int i;
    double x[N], y[N];
    for (i = 0; i < N; i++)
    {
        x[i] = rand() % 50;
        printf("%4.0f ", x[i]);
    }
    printf("\n");
    printf("\nThe average is: %f\n", fun(x, y));
    for (i = 0; y[i] >= 0; i++)
        printf("%5.1f ", y[i]);
    printf("\n");

    getchar();
}

/*The result be shown as followed : 

41   17   34    0   19   24   28    8   12   14

The average is: 19.700000
41.0  34.0  24.0  28.0

*/