/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 15:41:25 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 17:50:35
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:将形参's'所指字符串中所有'ASCII'码值小于'97'的字符存入形参't'所指字符数组中,形成一个新串,并统计出符合条件的字符个数
 * 作为函数值返回.
 */

#include <stdio.h>
#include <stdlib.h>

int fun(char *s, char *t)
{
    int n = 0;
    while (*s)
    {
        if (*s < 97)
        {
            /**********found**********/
            *(t + n) = *s;
            n++;
        }
        /**********found**********/
        s++;
    }
    *(t + n) = 0;
    /**********found**********/
    return n;
}

void main()
{
    char s[81], t[81];
    int n;
    printf("\nEnter a string:\n");
    gets(s);

    n = fun(s, t);
    printf("\nThere are %d letter which ASCII code is less than 97: %s\n", n, t);
    system("pause");
}

/*The result be shown as followed:

Enter a string:
Abc@1x56*

There are 6 letter which ASCII code is less than 97: A@156*
Press any key to continue . . .

*/