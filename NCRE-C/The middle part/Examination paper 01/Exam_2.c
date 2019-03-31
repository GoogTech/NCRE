/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-20 11:15:55 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-20 11:51:42
 */

/*  (ノ◕ω◕)ノ❤ ~
 * 
 *  函数'fun'的功能是：判断一个整数是否为素数.若是素数返回'1',否则返回'0'.
 *  在'Main'函数中返回'1'用'YSE'表示,反之：'NO'.
 */

#include <stdlib.h>
#include <stdio.h>
//?
#include <conio.h>

/*
 * Declare the method.
 */
static int fun(int m);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n = 0;

    /**
     * ? system("CLS") : 
     */
    system("CLS");
    printf("\nPlease enter the n :");
    scanf("%d", &n);

    if (fun(n))
    {
        printf("YSE\n");
    }
    else
    {
        printf("NO\n");
    }

    /*
     * ...
     */
    int a = 1, b = 10;
    while (a % b)
    {
        a++;
    }
    printf("\na = %d", a);

    system("pause");
    return 0;
}

/*
 * Defined the method of fun.
 */
static int fun(int m)
{
    int k = 2;

    /**
     * todo : It's will be return the conditional of ture If (m % k) is equal to '0'.
     */
    while (k <= m && (m % k))
    {
        k++;
    }
    if (m == k)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
