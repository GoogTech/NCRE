/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-20 10:38:06 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-20 11:15:18
 */

/*  (ノ◕ω◕)ノ❤ ~
 * 
 *  函数'fun'的功能是：计算下式前'n'项的和,并作为函数值返回.
 * 
 *  Result = 1x3/2² - 3x5/4² - ··· +（-1）ⁿ/(-1)¹ x (2xn-1)x(2xn+1)/(2xn)²
 *  
 *  当形参'n'的值为'10'时,函数返回:'-0.204491'
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static double fun(int n);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n = 0;
    printf("Please input the n(n>0) : ");
    scanf("%d", &n);
    printf("\nThe result is : %f\n", fun(n));

    system("pause");
    return 0;
}

/*
 * Defined the method of fun.
 */
static double fun(int n)
{
    int i, k;
    double t, result = 0;

    //! Attention : blank
    k = 1;
    for (i = 1; i <= n; i++)
    {
        //! Attention : blank
        t = (2 * i);
        result = result + k * (2 * i - 1) * (2 * i + 1) / (t * t);
        //! Attention : blank
        k = k * (-1);
    }
    return result;
}
