/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-20 11:56:15 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-20 12:10:45
 */

/*  (ノ◕ω◕)ノ❤ ~
 * 
 *  函数'fun'的功能:找出一维数组元素中最大的值以及所在的下标并通过形参传回.
 */

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static void fun(int array[], int n, int *max, int *index);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i, array[20], max, index, n = 10;

    /**
     * ? srand();
     */
    srand((unsigned)time(NULL));

    printf("The array as followed :\n");
    for (i = 0; i <= n; i++)
    {
        array[i] = rand() % 50;
        printf("%d\t", array[i]);
    }

    fun(array, n, &max, &index);
    printf("\n\nMAX = %d \t Index = %d\n", max, index);

    system("pause");
    return 0;
}

/*
 * Defined the method of fun.
 */
static void fun(int array[], int n, int *max, int *index)
{
    int i;
    *max = array[0];
    *index = 0;
    for (i = 1; i < n; i++)
    {
        if (*max < array[i])
        {
            *max = array[i];
            *index = i;
        }
    }
}
