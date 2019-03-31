/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 21:44:09 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 22:03:46
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 在此程序中,函数'fun'的功能是:在'3 x 4'的矩阵中找出在行上最大,在列上最小的那个元素,若没有符合条件的元素则输出相应信息. 
 */

#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

void fun(int (*a)[N])
{
    int i = 0, j, find = 0, rmax, c, k;
    while ((i < M) && (!find))
    {
        rmax = a[i][0];
        c = 0;
        //? 找出在行上最大的数.
        for (j = 1; j < N; j++)
            if (rmax < a[i][j])
            {
                /**********found**********/
                rmax = a[i][j];
                c = j; //? 将该数的列值'j'保存到'c'中.
            }
        find = 1;
        k = 0;

        //? 如果该数不是列中最小值,那么把'find'置'0'.
        while (k < M && find)
        {
            /**********found**********/
            if (k != i && a[k][c] <= rmax)
                find = 0;
            k++;
        }
        if (find)
            printf("find: a[%d][%d]=%d\n", i, c, a[i][c]);
        /**********found**********/
        i++; //? while的控制变量,所以每做一次循环,该数值要加'1'.(i<M)
    }
    if (!find)
        printf("not found!\n");
}

void main()
{
    int x[M][N], i, j;
    printf("Enter number for array:\n");
    for (i = 0; i < M; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &x[i][j]);

    printf("The array:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
            printf("%3d", x[i][j]);
        printf("\n\n");
    }

    fun(x);
    system("pause");
}

/*The result be shown as followed:

Enter number for array:
1 2 3 4
5 6 7 8
9 1 2 3
The array:
  1  2  3  4

  5  6  7  8

  9  1  2  3

not found!
Press any key to continue . . .


Enter number for array:
1 2 13 4
7 8 10 6
3 5 9 7
The array:
  1  2 13  4

  7  8 10  6

  3  5  9  7

find: a[2][2]=9
Press any key to continue . . .

*/