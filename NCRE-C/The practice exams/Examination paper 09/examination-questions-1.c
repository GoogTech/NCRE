/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 19:35:44 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 17:03:51
 */

/*
 * 函数'fun'的功能是建立一个'N x N'的矩阵,矩阵元素的构成规律是: 最外层元素的值全部为'1',从外向内第'2'层元素的值全部为'2',第三层元素的值全部为'3' ···
 */

#include <stdio.h>
#define N 7

/**********found**********/
void fun(int (*a)[N])
{
    int i, j, k, m;
    if (N % 2 == 0)
        m = N / 2;
    else
        m = N / 2 + 1;
    for (i = 0; i < m; i++)
    {
        /**********found**********/
        for (j = i; j < N - i; j++) //! j=i
            //? 表示第一行和最后一行数组'a[N][N]'的值.
            a[i][j] = a[N - i - 1][j] = i + 1;
        for (k = i + 1; k < N - i; k++)
            /**********found**********/
            //? 代表'a[N][N]'中每一列的值.
            a[k][i] = a[k][N - i - 1] = i + 1; //! i+1
    }
}
void main()
{
    int x[N][N] = {0}, i, j;
    fun(x);
    printf("\nThe result is:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n");
    }

    getchar();
}

/*The result be shown as followed:

The result is:
  1  1  1  1  1  1  1
  1  2  2  2  2  2  1
  1  2  3  3  3  2  1
  1  2  3  4  3  2  1
  1  2  3  3  3  2  1
  1  2  2  2  2  2  1
  1  1  1  1  1  1  1

*/
