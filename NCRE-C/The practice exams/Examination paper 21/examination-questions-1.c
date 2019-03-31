/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 18:12:32 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 18:21:23
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:将形参's'所指字符串中的数字字符转换对应的数值,计算出这些数值的累加和作为函数值返回.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int fun(char *s)
{
    int sum = 0;
    while (*s)
    {
        /**********found**********/
        if (isdigit(*s))     //?利用'isdigit()'函数找出字符串中的数字字符.
            sum += *s - '0'; //? '0'字符对应的'ASCII'码值是'48'.所以也可以改写为: sum += *s - 48;
        /**********found**********/
        s++;
    }
    /**********found**********/
    return sum;
}

void main()
{
    char s[81];
    int n;
    printf("\nEnter a string:\n\n");
    gets(s);

    n = fun(s);
    printf("\nThe result is:  %d\n\n", n);
    system("pause");
}

/*The result be shown as followed:

Enter a string:

https://yubuntu0109.github.io

The result is:  10

Press any key to continue . . .

*/