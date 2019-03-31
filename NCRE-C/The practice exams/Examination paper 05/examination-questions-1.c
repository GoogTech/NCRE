/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 14:09:02 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 14:18:12
 */

/*
 * 程序填空题-题目描述如下：
 * 
 * 函数'fun'的功能是：计算形参'x'所指数组中'N'个数的平均数(规定所有数均为正数),将所指数组中小于平均值的数据移至数组前部,
 * 大于等于平均值的数据移动至'x'所指数组的后部,平均值作为函数值返回,在主函数中输出平均值移动后的数据. 
 */

#include <stdlib.h>
#include <stdio.h>
#define N 10

double fun(double *x)
{
    int i, j;
    double av, y[N];
    av = 0;
    for (i = 0; i < N; i++)
        /**********found**********/
        av += x[i] / N;
    for (i = j = 0; i < N; i++)
        if (x[i] < av)
        {
            y[j] = x[i];
            x[i] = -1;
            /**********found**********/
            j++;
        }
    i = 0;
    while (i < N)
    {
        if (x[i] != -1)
            y[j++] = x[i];
        /**********found**********/
        i++;
    }
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
17     0    19     8    12    14    41    34    24    28

*/