/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 16:27:04 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 16:42:56
 */

/*
 * ★★程序填空题
 * 
 * 函数'fun'的功能是 : 建立一个'N x N'的矩阵,矩阵元素构成规律是: 最外层元素的值全部为'1',从外向内第二层元素全部为'2'，以此类推.
 */

#include <stdio.h>
#define N 51

/*
 * Declare the method.
 */
static void fun(int (*array)[N]); //!Attention : blank
//warning: implicit declaration of function 'sleep' [-Wimplicit-function-declaration]
int sleep();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{

    int arrary[N][N] = {0}, i, j;

    //ouput the result.
    fun(arrary);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3d", arrary[i][j]);
        }
        printf("\n");
        sleep(1);
    }

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(int (*array)[N])
{
    int i, j, k, m;
    //约束矩阵层数.
    if (N % 2 == 0)
        m = N / 2;
    else
        m = N / 2 + 1;

    //遍历所有元素.
    for (i = 0; i < m; i++)
    {
        //初始化矩阵第一行和最后一行的元素.
        //注意：J < N -1
        for (j = i; j < N - i; j++)
        {
            //? array[i][j]: 第一行元素.
            //? array[N-i-1][j]: 最后一行的元素.
            array[i][j] = array[N - i - 1][j] = i + 1; // 1
        }
        //初始化矩阵每一列元素.
        for (k = i + 1; k < N - i; k++)
        {
            //? array[k][N-i-1]: 每一列的元素.
            //? array[k][i]: 除了第一行和最后一行的元素.
            array[k][i] = array[k][N - i - 1] = i + 1; // 2
        }
    }
}
