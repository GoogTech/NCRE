/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-25 20:05:47 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-25 20:35:46
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序填空题
 * 函数'fun'的功能为：把形参'a'所指数组中的最小值放在元素'a[0]'中.接着把'a'所指数组中最大值放在'a[1]'元素中.
 * 再把'a'所指数组元素中的次小值放在'a[2]'中,把'a'所指数组元素中的次大值放在'a[3]',以此类推.
 */

/*
 * Include the header file.
 */
#include <stdio.h>
#include <stdlib.h>
#define N 9

/*
 * Declare the function.
 */
static void fun(int a[], int n);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int b[N] = {9, 1, 4, 2, 3, 6, 5, 8, 7}, i;

    printf("The original data  :\n");
    for (i = 0; i < N; i++)
    {
        printf("%4d ", b[i]);
    }
    printf("\n");

    fun(b, N);

    printf("\nThe data after moving  :\n");
    for (i = 0; i < N; i++)
    {
        printf("%4d ", b[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

/*
 * Defined the function.
 */
//todo : The algorithm is so cool
static void fun(int array[], int n)
{
    int i, j, max, min, px, pn, temp;
    for (i = 0; i < n - 1; i += 2)
    {
        //! Attention : blank
        max = min = array[i];
        px = pn = i;
        for (j = i + 1; j < n; j++)
        {
            //! Attention : blank
            if (max < array[j])
            {
                max = array[j];
                px = j;
            }
            //! Attention : blank
            if (min > array[j])
            {
                min = array[j];
                pn = j;
            }
        }
        if (pn != i)
        {
            temp = array[i];
            array[i] = min;
            array[pn] = temp;
            if (px == i)
            {
                px = pn;
            }
        }
        if (px != i + 1)
        {
            temp = array[i + 1];
            array[i + 1] = max;
            array[px] = temp;
        }
    }
}