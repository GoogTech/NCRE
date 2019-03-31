/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-16 19:39:40 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-16 20:04:09
 */

/*
 * 程序修改题
 * 
 * 函数'fun'的功能是: 用下面的公式求'π'的近似值,直到最后一项的绝对值小于指定的数(参数num)为止.
 * 
 * π/4 ≈ 1-1/3+1/5-1/7+··· 
 */

#include <stdlib.h>
#include <math.h> //int fabs();
#include <stdio.h>

/*
 * Declare the method.
 */
static float fun(float num);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    float n, result;
    printf("PLEASE ENTER FLOAT NUMBER : ");
    scanf("%f", &n);

    result = fun(n);
    printf("\nTHE RESULT IS : %6.4f\n", result);

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static float fun(float num)
{
    int s = 1;
    float n = 1, t = 1, pi = 0;

    //! MODIFY
    //? int fabs() : Absolute value.
    while (fabs(t) >= num)
    {
        pi += t; //pi = 1
        n += 2;
        s = -s;
        t = s / n; //! MODIFY
    }
    pi = pi * 4;
    return pi;
}