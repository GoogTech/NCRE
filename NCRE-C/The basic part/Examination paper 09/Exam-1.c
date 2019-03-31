/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 12:55:17 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 13:26:57
 */

/*
 * 程序修改题
 * 
 * 在此函数中,函数'fun'的功能是 : 找出'N x N'矩阵中每列元素中的最大值,并按顺序依次存放于形参'array_b'所指的一维数组中. 
 */

#include <stdio.h>
#define N 4

/*
 * Declare the method.
 */
static void fun(int (*array_a)[N], int *array_b);

/*
 * Test the progarm.
 */
int main(int argc, char const *argv[])
{
    int array_a[N][N] = {{0, 5, 8, 7}, {6, 1, 9, 3}, {1, 2, 3, 4}, {2, 8, 4, 3}}, array_b[N];
    printf("THE ORIGINAL ARRAY_A AS FOLLOWED : \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d  ", array_a[i][j]);
        }
        printf("\n");
    }
    fun(array_a, array_b);
    printf("THE RESULT BE SHOWED AS FOLLOWED : \n");
    for (int i = 0; i < N; i++)
    {
        printf("%d  ", array_b[i]);
    }

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(int (*array_a)[N], int *array_b)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        array_b[i] = array_a[0][i]; //! blank
        for (j = 0; j < N; j++)
        {
            if (array_a[j][i] > array_b[i]) //求出每列中的最大值
            {
                array_b[i] = array_a[j][i]; //! blank
            }
        }
    }
}


/*

THE ORIGINAL ARRAY_A AS FOLLOWED :
0  5  8  7
6  1  9  3
1  2  3  4
2  8  4  3

THE RESULT BE SHOWED AS FOLLOWED :
6  8  9  7

*/