/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-27 09:06:09 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-27 10:01:35
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序填空题
 * 
 * 函数'fun'的功能是：计算'x'所指数组中'N'个数的平均值(规定所有数均为正数).
 * 平均数通过形参放回给主函数,将最接近平均值的数作为函数值返回,并在主函数中输出.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

/*
 * Declare the funcion.
 */
static double fun(double array[], double *average);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i;
    double array[N], average, approximate_average;
    printf("The each element of array : \n");
    for (i = 0; i < N; i++)
    {
        array[i] = rand() % 50;
        printf("%4.0f\t", array[i]);
    }
    printf("\n");

    approximate_average = fun(array, &average);
    printf("\nThe average is : %f", average);
    printf("\nM = %5.1f\n", approximate_average);

    system("pause");
    return 0;
}

/*
 * Defined the funtion.
 */
static double fun(double array[], double *average)
{
    int i, j;
    double flag, sum = 0;
    for (i = 0; i < N; i++)
    {
        sum = sum + array[i];
    }
    //!Attention : blank
    *average = sum / N;

    //? d : Minimum difference.
    flag = 666;
    for (i = 0; i < N; i++)
    {
        //todo Algorithm : Less or Greater than the average.(or equal to the average)
        if ((array[i] < *average && *average - array[i] <= flag) || (array[i] >= *average && *average - array[i] > flag))
        {
            flag = *average - array[i];
            //!Attention : blank
            j = i;
        }
    }
    //!Attention : blank
    return array[j];
}
