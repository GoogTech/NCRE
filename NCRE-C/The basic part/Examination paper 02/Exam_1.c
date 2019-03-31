/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-25 15:47:16 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-25 16:35:14
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 函数'fun'的功能是：计算形参'x'所指数组中'N'个数的平均值（规定所有数均为正数）,
 * 作为函数值返回,并将大于平均数的数放在形参'y'所指的数组中,在主函数中输出.
 */
#include <stdlib.h>
#include <stdio.h>
#define N 10

/*
 * Declare the method.
 */
static double fun();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i;
    double x[N], y[N];
    printf("Initialize the array by the random number : ");
    for (i = 0; i < N; i++)
    {
        x[i] = rand() % 50;
        printf("%4.0f", x[i]);
    }

    //Call the method of 'fun'.
    printf("\nThe average is : %4.3f", fun(x, y));

    printf("\nGet the numbers which greater than average : ");
    for (i = 0; y[i] >= 0; i++)
    {
        printf("%4.0f", y[i]);
    }
    getchar();
    return 0;
}

/*
 * Defined the method of fun.
 */
static double fun(double x[], double *y)
{
    int i, j;
    double average;

    //! Attention : blank
    average = 0.0;
    //Get the average.
    for (i = 0; i < N; i++)
    {
        //! Attention : blank
        average = average + x[i] / N;
    }
    //Get the numbers which greater than average.
    for (i = j = 0; i < N; i++)
    {
        if (x[i] > average)
        {
            //! Attention : blank
            y[j++] = x[i];
        }
    }
    //? Initialize the last index of array.
    y[j] = -1;

    return average;
}