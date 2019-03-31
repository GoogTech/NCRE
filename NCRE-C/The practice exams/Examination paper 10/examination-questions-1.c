/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 18:17:54 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 18:35:36
 */

/**
 * 程序填空题-题目描述如下所示:
 * 
 * 函数'fun'的功能是:判断形参'a'所指的'N x N'(规定'N'为奇数)的矩阵是否为'幻方',若是,函数时返回值为'1',若不是函数返回值为'0'.
 * '幻方'的判定条件是: 矩阵每行,每列,主对角线及反对角线上元素之和都想等.
 */

#include <stdio.h>
#define N 3

int fun(int (*a)[N])
{
    int i, j, m1, m2, row, colum;
    m1 = m2 = 0;
    for (i = 0; i < N; i++)
    {
        //? 记录对角线与反对角线的和.
        j = N - i - 1;
        m1 += a[i][i];
        m2 += a[i][j];
    }
    if (m1 != m2)
        return 0;
    for (i = 0; i < N; i++)
    {
        /**********found**********/
        row = colum = 0;
        for (j = 0; j < N; j++)
        {
            //? 记录每行和每列的总和.
            row += a[i][j];
            colum += a[j][i];
        }
        /**********found**********/
        if ((row != colum) || (row != m1))
            return 0;
    }
    /**********found**********/
    return 1;
}
void main()
{
    int x[N][N], i, j;
    printf("Enter number for array:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &x[i][j]);

    printf("Array:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n");
    }

    if (fun(x))
        printf("The Array is a magic square.\n");
    else
        printf("The Array isn't a magic square.\n");

    system("pause");
}

/*The result be shown as followed:

Enter number for array:
1 2 3
4 5 6
7 8 9
Array:
  1  2  3
  4  5  6
  7  8  9
The Array isn't a magic square.
Press any key to continue . . .



Enter number for array:
4 9 2
3 5 7
8 1 6
Array:
  4  9  2
  3  5  7
  8  1  6
The Array is a magic square.
Press any key to continue . . .

*/