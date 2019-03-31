/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 14:02:55 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 14:17:49
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:将'a'所指的'4x3'矩阵中第'k'行的元素与'0'行元素交换.
 */

#include <stdlib.h>
#include <stdio.h>
#define N 3
#define M 4

/**********found**********/
void fun(int (*a)[N], int k) //2
{
    int i, temp;
    /**********found**********/
    for (i = 0; i < N; i++) //? i < N : 交换每个元素.
    {
        temp = a[0][i];
        /**********found**********/
        a[0][i] = a[k][i];
        a[k][i] = temp;
    }
}
void main()
{
    int x[M][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}, i, j;
    printf("The array before moving:\n\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n\n");
    }

    fun(x, 2);
    printf("The array after moving:\n\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n\n");
    }

    system("pause");
}

/*The result be shown as followed:

The array before moving:

  1  2  3

  4  5  6

  7  8  9

 10 11 12

The array after moving:

  7  8  9

  4  5  6

  1  2  3

 10 11 12

Press any key to continue . . .

*/
