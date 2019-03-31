/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 14:45:36 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 14:58:41
 */

/*
 * 程序填空题-题目描述如下所示:
 * 
 * 将'a'所指的'3x5'矩阵中第'k'列的元素左移到第'0'列,第'k'列以后的每列元素行依次左移,原来左边的各列依次绕到右边. 
 */

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 5

void fun(int (*a)[N], int k) // k = 2
{
    int i, j, p, temp;
    /**********found**********/
    for (p = 1; p <= k; p++)
        for (i = 0; i < M; i++)
        {
            temp = a[i][0];
            /**********found**********/
            for (j = 0; j < N - 1; j++)
                a[i][j] = a[i][j + 1];
            /**********found**********/
            a[i][N - 1] = temp;
        }
}

void main()
{
    int x[M][N] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}}, i, j;
    printf("The array before moving:\n\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n");
    }

    fun(x, 2);
    printf("The array after moving:\n\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n");
    }

    system("pause");
}

/*The result be shown as followed:

The array before moving:

  1  2  3  4  5
  1  2  3  4  5
  1  2  3  4  5
The array after moving:

  3  4  5  1  2
  3  4  5  1  2
  3  4  5  1  2
Press any key to continue . . .

*/