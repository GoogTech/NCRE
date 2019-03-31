/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-09 08:36:18 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-09 09:19:58
 */

/*
 * ٩(๑>◡<๑)۶ 
 * 
 * 程序填空题
 * 
 * 在程序中,函数'fun'的功能是 : 计算形参'array'所指数组中'N'个数的平均值(规定所有数均为正数).
 * 将所指数组中小于平均值数据移置数组的前部.大于等于平均值的数据移动至'array'所指数组的前部.
 * 平均值作为函数值返回,在主函数中输出平均值和移动后的数据.
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
    double x[N];
    printf("THE ORIGINAL ARRAY : ");
    for (i = 0; i < N; i++)
    {
        x[i] = rand() % 50;
        printf("%4.0f", x[i]);
    }
    printf("\n");

    printf("THE AVERAGE IS : %4.0f\n", fun(x));

    printf("THE ARRAY AFTER SORTING : ", fun(x));
    for (i = 0; i < N; i++)
    {
        printf("%5.0f", x[i]);
    }
    printf("\n");

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static double fun(double *array)
{
    int i, j;
    double average = 0, array_temp[N];
    //todo : Get the average of element.
    for (i = 0; i < N; i++)
    {
        average += array[i] / N; //! blank
    }

    //todo : Get the element which less than the average.
    for (i = j = 0; i < N; i++)
    {
        if (array[i] < average)
        {
            array_temp[j] = array[i];
            array[i] = -1;
            j++; //! blank
        }
    }

    //todo : Get the element which greater than the average.
    i = 0;
    while (i < N)
    {
        if (array[i] != -1)
        {
            array_temp[j++] = array[i];
        }
        i++; //! blank
    }

    for (i = 0; i < N; i++)
    {
        array[i] = array_temp[i];
    }

    return average;
}
