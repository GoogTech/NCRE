/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-17 18:02:01 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-17 18:39:37
 */

/*
 * 程序设计题
 * 
 * 此程序中,请编写函数'fun'其功能是: 移动一维数组中的内容,若数组中有'n'个整数,要求把下标从'0 ~ p'(包含'p',p <= n-1)
 * 的数组元素平移到数组的最后.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 15

/*
 * Declare the method.
 */
static void fun(int *array, int p, int n);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i, p, n = N;
    int array[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    printf("THE ORIGINAL DATA : ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", array[i]);
    }

    printf("\nPLEASE ENTER THE P : ");
    scanf("%d", &p);
    fun(array, p, n);

    printf("\nTHE DATA AFTER MOVING : ");
    for (i = 0; i < n; i++)
    {
        printf("%3d", array[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

/**
 * TODO : Defined the method be yourself.
 * ?ATTENTION : The algorithm about moving.
 */
static void fun(int *array, int p, int n)
{
    int i, j, temp;
    //todo : control the scope of the element.
    for (i = 0; i <= p; i++)
    {
        temp = array[0];
        //todo : p+1~n-1 into the array.
        for (j = 1; j < n; j++)
        {
            array[j - 1] = array[j];
        }
        //todo : 0~p into the array.
        array[n - 1] = temp;
    }
}