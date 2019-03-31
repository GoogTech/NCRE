/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 19:02:44 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 19:10:56
 */

/*
 * 此程序中,函数'fun'的功能是:找出'N x N'矩阵中每列元素中的最大值,并按顺序依次存放于形参'b'所指的一维数组中.
 */

#include <stdio.h>
#define N 4

void fun(int (*a)[N], int *b)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        /**********found**********/
        b[i] = a[0][i];
        for (j = 1; j < N; j++)
            /**********found**********/
            if (b[i] < a[j][i])
                b[i] = a[j][i];
    }
}

void main()
{
    int x[N][N] = {{12, 5, 8, 7}, {6, 1, 9, 3}, {1, 2, 3, 4}, {2, 8, 4, 3}}, y[N], i, j;
    printf("\nThe matrix :\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%4d", x[i][j]);
        printf("\n");
    }

    /**********found**********/
    fun(x, y);

    printf("\nThe result is:");
    for (i = 0; i < N; i++)
        printf("%3d", y[i]);
    printf("\n");

    getchar();
}

/*

The matrix :
  12   5   8   7
   6   1   9   3
   1   2   3   4
   2   8   4   3

The result is: 12  8  9  7

*/