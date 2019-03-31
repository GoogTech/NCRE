/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 14:33:06 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 14:43:01
 */

/*
 * 程序设计题-题目描述如下： 
 * 
 * 编写函数'fun',该函数的功能是：求出二维数组周边元素之和,作为函数值返回.
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5

int fun(int a[M][N])
{
    int i, j, sum;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

void main()
{
    FILE *wf;
    int aa[M][N] = {{1, 3, 5, 7, 9},
                    {2, 9, 9, 9, 4},
                    {6, 9, 9, 9, 8},
                    {1, 3, 5, 7, 0}};
    int i, j, y;

    system("CLS");
    printf("The original data is :\n ");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%6d ", aa[i][j]);
        printf("\n ");
    }

    y = fun(aa);
    printf("\nThe sum: %d\n ", y);
    printf("\n ");

    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%d", y);
    fclose(wf);
    /*****************************/

    getchar();
}

/*

The original data is :
      1      3      5      7      9
      2      9      9      9      4
      6      9      9      9      8
      1      3      5      7      0

The sum: 61

*/