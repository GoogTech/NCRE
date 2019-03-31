/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 08:53:32 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 10:14:15
 */

/*
 * 程序修改题
 * 
 * 在此程序中,函数'fun'的功能是: 先从键盘接收上输入三行和,三列的矩阵的各个元素的值,然后输出主对角线元素之和.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 3

/*
 * Declare the method.
 */
static void fun();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    fun();

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static void fun()
{
    int arrary[N][N], sum = 0, i, j; //! MODIFY
    printf("PLEASE ENTE THE ARRAY : \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d ", &arrary[i][j]); // ! MODIFY
        }
    }

    for (i = 0; i < N; i++)
    {
        sum += arrary[i][i];
    }
    printf("SUM IS : %d\n", sum);
}

/*
PLEASE ENTE THE ARRAY :
111 111 111
222 222 222
333 333 333
0
SUM IS : 666
Press any key to continue . . .
*/