/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 16:55:05 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 17:10:02
 */

/* 
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:将十进制正整数'm'转换为'k'(2<=k<=9),并按位输出.
 * 
 * 例如:若输入'8'和'2',则应输出'1000'(既十进制'8'转换成二进制表示为'1000').
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*************found**************/
void fun(int m, int k)
{
    int aa[20], i;
    for (i = 0; m; i++)
    {
        /*************found**************/
        /**
         * 将十进制正整数转换为任意进制的数的方法是:从整数'n'译出它的各位'k'进制的数值,
         * 需要采用除'k'取余的方法,既求'n'除'k'的余数,的到它的'k'进制的个位数,接着将'n'
         * 除以'k',在'n'不等于'0'的状况下循环,能顺序求出'n'的'k'进制的各个位上的数.
         */
        aa[i] = m % k;
        m /= k;
    }
    for (; i; i--)
        /*************found**************/
        /**
         * 在循环结束时,'i'已经多加了一个'1',所以这里要减去'1'.
         */
        printf("%d", aa[i - 1]);
}
void main()
{
    int b, n;

    printf("\nPlease enter a number and a base:\n");
    scanf("%d%d", &n, &b);
    fun(n, b);

    printf("\n ");
    system("pause");
}

/*The result be shown as followed: 

Please enter a number and a base:
8 2
1000
Press any key to continue . . .

*/