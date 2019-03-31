/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 14:03:37 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 14:16:24
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:计算形参's'所指字符串包含的单词个数,作为函数值返回,为便于统计,规定个单词之间用空格隔开.
 */

#include <stdio.h>
#include <stdlib.h>
int fun(char *s)
{
    int n = 0, flag = 0;
    while (*s != '\0')
    {
        if (*s != ' ' && flag == 0)
        {
            /**********found**********/
            n++;
            flag = 1;
        }
        /**********found**********/
        if (*s == ' ')
        {
            flag = 0;
        }
        /**********found**********/
        s++;
    }
    return n;
}
void main()
{
    char str[81];
    int n;

    printf("\nEnter a line text:\n");
    gets(str);

    n = fun(str);
    printf("\nThere are %d words in this text.\n\n", n);
    system("pause");
}

/*The result be shown as followed:

Enter a line text:
My personal website : https://YUbuntu0109.github.io

There are 5 words in this text.

Press any key to continue . . .

*/