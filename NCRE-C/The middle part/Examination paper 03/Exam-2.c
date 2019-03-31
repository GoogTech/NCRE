/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-02 19:28:01 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-02 20:13:11
 */

/*
 *  (ノ◕ω◕)ノ
 * 
 * 程序修改题
 * 此程序中,函数'fun'的功能是 : 根据整型形参'm',计算公式的值 : y = 1 + 1/2x2 + 1/3x3 + 1/4x4 + ··· + 1/mxm
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static double fun(int m);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n;
    printf("PLEASE ENTER THE Y : ");
    scanf("%d", &n);

    printf("\nTHE RESULT IS : %f\n", fun(n));

    system("pause");
    return 0;
}

/*
 * Defined the mthod.
 */
static double fun(int m)
{
    double result = 1.0;
    int i;
    for (i = 2; i <= m; i++)
    {
        /**
         * ! Attention : int ——> double
         * ? result += 1.0/(i*i) or result +=(double)1.0/(i*i)
         */
        result += (double)1 / (i * i);
    }

    return (result);
}