/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-07 16:01:21 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-07 16:17:32
 */

/*
 * ٩(๑>◡<๑)۶ 
 * 
 * 程序设计题
 * 
 * 编写函数'fun',其功能是 : 将两为数的正整数'a','b'合并成一个整数放在'c'中.合并的方式是:
 * 将'a'数的十位和个位数依次放在'c'数的个位和百位上,'b'数的十位和个位依次放在'c'数的千位
 * 和十位上.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static void fun(int a, int b, long *c);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int a, b;
    long c;
    printf("INPUT A AND B :");
    scanf("%d %d", &a, &b);

    fun(a, b, &c);
    printf("THE RESULT IS : %ld\n", c);

    system("pause");
    return 0;
}

/**
 * TODO : Defined the method by yourself and remember love yourself please.
 */
static void fun(int a, int b, long *c)
{
    *c = a / 10 + (b % 10) * 10 + (a % 10) * 100 + (b / 10) * 1000;
}
