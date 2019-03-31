/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-02 20:13:20 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-02 20:21:07
 */

/*
 *  (ノ◕ω◕)ノ
 * 
 * 程序设计题
 * 
 * 编写函数'fun',其功能是 : 'B=A+A' 既将矩阵'A'加上'A'的转置,并存放在矩阵B中.计算结果在'main'函数中输出.
 * 
 * 例如矩阵:        其转置矩阵为:           程序输出:            
 *      1 2 3               1 4 7               2 6 10
 *      4 5 6               2 5 8               6 10 14
 *      7 8 9               3 6 9               10 14 18
 */

#include <stdio.h>
#define N 3

/*
 * Declare the method.
 */
static void fun(int a[N][N], int b[N][N]);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int a[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, t[N][N];
    int i, j;

    fun(a, t);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("% 7d", t[i][j]);
        }
        printf("\n");
    }

    getchar();
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 */
static void fun(int a[N][N], int b[N][N])
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            b[i][j] = a[i][j] + a[j][i];
        }
    }
}
