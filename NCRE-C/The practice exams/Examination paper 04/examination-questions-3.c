/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 13:31:15 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 13:43:36
 */

/* 
 * 程序设计题-题目描述如下：
 * 
 * 程序中,定义了'N x N'的二维数组,并在主函数中赋值,请编写函数'fun',函数的功能是：求出数组周边的平均值并作为函数值返回给主函数中的's'.
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 5
double fun(int w[][N])
{
    int i, j, count;
    double bound = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
            {
                bound += w[i][j];
                count++;
            }
        }
    }
    return bound / count;
}
void main()
{
    FILE *wf;
    int a[N][N] = {0, 1, 2, 7, 9, 1, 9, 7, 4, 5, 2, 3, 8, 3, 1, 4, 5, 6, 8, 2, 5, 9, 1, 4, 1};
    int i, j;
    double s;

    system("CLS");
    printf("*****The array*****\n ");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d ", a[i][j]);
        }
        printf("\n ");
    }

    s = fun(a);
    printf("*****THE RESULT*****\n ");
    printf("The sum is : %lf\n ", s);

    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%lf", s);
    fclose(wf);
    /*****************************/

    getchar();
}


/*The result be shown as followed:

*****The array*****
    0    1    2    7    9
    1    9    7    4    5
    2    3    8    3    1
    4    5    6    8    2
    5    9    1    4    1
 *****THE RESULT*****
 The sum is : 3.375000

*/