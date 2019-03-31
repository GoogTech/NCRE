/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-22 11:13:42 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-22 11:28:57
 */

/*
 * 程序设计题
 * 
 * 编写函数'fun',其功能是: 根据以下公式计算'S',并将计算结果作为函数值返回.'n'通过形参传入.
 * 
 * S = 1 + 1/1+2 + 1/1+2+3 + ··· + 1/1+2+3+···+n
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Declare the method.
 */
static float fun(int n);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n;
    float s;
    printf("PLEASE ENTER THE N : ");
    scanf("%d", &n);
    s = fun(n);
    printf("\nTHE RESULT IS : %f\n", s);

    system("pause");
    return 0;
}

/**
 * TODO: Defined the method by yourself.
 */
static float fun(int n)
{
    int i, denominator = 0;
    float s = 0.0;
    for (i = 1; i < n; i++)
    {
        denominator += i;
        s += 1.0 / denominator;
    }
    return s;
}