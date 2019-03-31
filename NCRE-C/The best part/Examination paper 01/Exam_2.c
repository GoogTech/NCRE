/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-25 20:41:02 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-25 20:55:14
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序修改题
 * 函数'fun'的功能是：用递归算法计算斐波拉切数列中第'n'项的值.从第一项起,斐波拉切数列为：1,1,2,3,5,13,21 ······
 */

/*
 * Include the header file.
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the function.
 */
static long fun(int g);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    long fib;
    int n;
    printf("Input n:  ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    fib = fun(n);
    printf("fib = %d\n\n", fib);

    system("pause");
    return 0;
}

/*
 * Defined the function.
 */
static long fun(int g)
{
    //! Attention : blank
    switch (g)
    {
    case 0:
        return 0;
    //! Attention : blank
    case 1:
        return 1;
    case 2:
        return 1;
    }
    return (fun(g - 1) + fun(g - 2));
}
