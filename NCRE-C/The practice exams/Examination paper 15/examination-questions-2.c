/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 15:01:11 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 15:27:46
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:根据形参'm'的值(2<=m<=9),在'm'行'm'列的二维数组中存放如下所示规律的数据,由'main'函数输出.
 */
/*
    例如,若输入'2',则输出如下:                   如输入4,则输出:
    1   2                                       1   2   3   4
    2   4                                       2   4   6   8
                                                3   6   9   12
                                                4   8   12  16
*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define M 10

int a[M][M] = {0};

/**************found**************/
void fun(int a[][M], int m)
{
    int j, k;
    for (j = 0; j < m; j++)
        for (k = 0; k < m; k++)
            /**************found**************/
            a[j][k] = (k + 1) * (j + 1);
}

void main()
{
    int i, j, n;

    printf(" Enter n : ");
    scanf("%d", &n);
    fun(a, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    system("pause");
}

/*The result be showed as followed:

 Enter n : 4
   1   2   3   4
   2   4   6   8
   3   6   9  12
   4   8  12  16
Press any key to continue . . .

*/