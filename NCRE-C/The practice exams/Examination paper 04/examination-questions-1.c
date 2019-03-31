/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 13:08:26 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 13:16:35
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:计算形参'x'所指数组中'N'个数的平均值(规定所有数均为正数),将所指数组中大于平均值的数据移至数组的前部,
 * 小于等于平均值的数据移至数组的后部,平均值作为函数值返回,在主函数中输出平均值和移动后的数据. 
 */

#include <stdlib.h>
#include <stdio.h>
#define N 10
double fun(double *x)
{
    int i, j;
    double s, av, y[N];
    s = 0;
    for (i = 0; i < N; i++)
        s = s + x[i];
    /**********found**********/
    av = s / N;
    for (i = j = 0; i < N; i++)
        if (x[i] > av)
        {
            /**********found**********/
            y[j++] = x[i];
            x[i] = -1;
        }
    for (i = 0; i < N; i++)
        /**********found**********/
        if (x[i] != -1)
            y[j++] = x[i];

    for (i = 0; i < N; i++)
        x[i] = y[i];

    return av;
}
void main()
{
    int i;
    double x[N];
    for (i = 0; i < N; i++)
    {
        x[i] = rand() % 50;
        printf("%4.0f ", x[i]);
    }
    printf("\n");

    printf("\nThe average is: %f\n", fun(x));
    printf("\nThe result :\n", fun(x));
    for (i = 0; i < N; i++)
        printf("%5.0f ", x[i]);
    printf("\n");

    getchar();
}

/*The result be shown as followed:

41   17   34    0   19   24   28    8   12   14

The average is: 19.700000

The result :
41    34    24    28    17     0    19     8    12    14

*/