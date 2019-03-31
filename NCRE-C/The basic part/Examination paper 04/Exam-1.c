/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-31 09:20:08 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-31 10:17:54
 */

/*
 *  (～￣▽￣)～ 
 * 
 * 程序填空题
 * 函数'fun'的功能是：计算形参'array'所指数组中'N'个数的平均数(规定所有数均为正数).
 * 将所指数组中大于平均值的数据移至数组的前部.小于等于平均数的数据移至'array'所指数
 * 组的后部.平均值作为函数值返回,在主函数中输出平均数和移动后的数据.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 10

/*
 * Declare the method.
 */
static double fun(double *array);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i;
    double array[N];
    for (i = 0; i < N; i++)
    {
        array[i] = rand() % 50; //0——>49
        printf("%4.0f", array[i]);
    }
    printf("\n");

    printf("The average is : %f\n", fun(array));
    for (i = 0; i < N; i++)
    {
        printf("%5.0f", array[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static double fun(double *array)
{
    int i, j;
    double average, result[N], sum = 0;
    for (i = 0; i < N; i++)
    {
        sum = sum + array[i];
    }
    average = sum / N;
    for (i = j = 0; i < N; i++) //TODO : Replace the element which greater than the average.
    {
        if (array[i] > average)
        {
            result[j++] = array[i];
            array[i] = -1; //?
        }
    }
    for (i = 0; i < N; i++) //TODO : Replace the element which less than the average.
    {
        if (array[i] != -1) //?
        {
            result[j++] = array[i];
        }
    }
    for (i = 0; i < N; i++) //TODO : Replace all element of array.
    {
        array[i] = result[i];
    }
    return average;
}
