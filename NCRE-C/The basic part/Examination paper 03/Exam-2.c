/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-27 10:02:43 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-27 10:08:47
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序修改题
 * 函数'fun'的功能是：根据整型形参'n',计算如下公式的值：A1 = 1 , A2 = 1/1+A1 , A3 = 1/1+A2 ··· An = 1/1+A(n-1) 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static float fun_1(int n);
static float fun_2(int n);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter the number : \n");
    scanf("%d", &n);
    printf("The first method : A%d = %lf\n", n, fun_1(n));
    printf("The second method : A%d = %lf\n", n, fun_2(n));

    system("pause");
    return 0;
}

/**
 * todo : The first method.
 */
static float fun_1(int n)
{
    float A = 1;
    int i;
    for (i = 2; i <= n; i++)
    {
        A = 1.0 / (1 + A);
    }
    return A;
}

/**
 * todo : The second method.
 */
static float fun_2(int n)
{
    float A = 1;
    while (n > 1)
    {
        A = 1.0 / (1 + A);
        n--;
    }
    return A;
}
