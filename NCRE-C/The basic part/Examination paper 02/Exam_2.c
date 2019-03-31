/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-25 16:36:40 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-25 16:52:15
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序修改题:
 * 函数'fun'的功能是: 根据整型参数'm',计算公式的值: y = 1/100*100 + 1/200*200 + 1/300*300 + ··· +1/m*m;
 */

/*
 * Include the header file.
 */
#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

/*
 * Declare the method.
 */
static double fun(int m);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n = 2000;
    system("CLS");
    printf("The result is : %lf\n", fun(n));

    system("pause");
    return 0;
}

/*
 * Defined the method of fun.
 */
static double fun(int m)
{
    double denominator, y = 0;
    int i;
    for (i = 100; i <= m; i += 100)
    {
        //? Type conversion : integer ——> double
        denominator = (double)i * (double)i;
        y += 1.0 / denominator;
    }
    return (y);
}