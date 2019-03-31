/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 17:15:00 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 17:20:02
 */

/*
 * 函数'fun'的功能是求矩阵(二维数组)'a[N][N]'中每行的最小值,结果存放到数组'b'中.  
 */

#include <stdio.h>
#include <stdlib.h>
#define N 4

void fun(int a[][N], int b[])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        /**********found**********/
        b[i] = a[i][0];
        /**********found**********/
        for (j = 1; j < N; j++)
            /**********found**********/
            if (b[i] > a[i][j])
                b[i] = a[i][j];
    }
}
void main()
{
    int a[N][N] = {{1, 4, 3, 2}, {8, 6, 5, 7}, {11, 10, 12, 9}, {13, 16, 14, 15}}, b[N];
    int i;

    fun(a, b);
    for (i = 0; i < N; i++)
        printf("%d,", b[i]);

    printf("\n");
    system("pause");
}

/*The resule be shown as followed:

1,5,10,13,
Press any key to continue . . .

*/
