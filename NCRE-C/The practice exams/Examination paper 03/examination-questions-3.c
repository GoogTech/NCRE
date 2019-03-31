/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 12:10:56 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 12:53:51
 */

/*
 * 程序设计题-题目描述如下：
 * 
 * 在此程序中,定义了'N x N'的二维数组,并在主函数中自动赋值,请编写函数'fun(int a[][N],int m)',该函数的功能是使数组右上半三角元素中的值乘以'm'. 
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
void fun(int a[][N], int m)
{
    int i, j;
    for (i = 0; i < N; i++) //0,1,2,3,4
    {
        for (j = 0; j < i; j++)
        {
            /**
             * 1 1 1 1 1
             * 1 1 1 1 1
             * 1 1 1 1 1
             * 1 1 1 1 1
             * 
             * a[0][0]
             * a[0][1]
             * a[0][2]->a[1][2]
             * a[0][3]->a[1][3]-a[2][3]
             * a[0][4]->a[1][4]->a[2][4]->a[3][4] 
             */
            a[j][i] = a[j][i] * m;
        }
    }
}
void main()
{
    FILE *out;
    int a[N][N], m, i, j;
    printf("*****The array*****\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = rand() % 20;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    m = rand() % 4;
    printf("m=%4d\n", m);

    fun(a, m);

    printf("THE RESULT\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    /******************************/
    out = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 03//out.dat", "w");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            a[i][j] = i * j;

    fun(a, 8);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            fprintf(out, "%4d", a[i][j]);
        fprintf(out, "\n");
    }
    fclose(out);
    /******************************/

    getchar();
}

/*The result be shown as followed:

*****The array*****
   1   7  14   0   9
   4  18  18   2   4
   5   5   1   7   1
  11  15   2   7  16
  11   4   2  13  12
m=   2
THE RESULT
   1  14  28   0  18
   4  18  36   4   8
   5   5   1  14   2
  11  15   2   7  32
  11   4   2  13  12

*/