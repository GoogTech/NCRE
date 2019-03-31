/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 13:21:08 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 13:34:12
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:将形参's'所指字符串中的所有数字字符前移,其他字符顺序后移动,处理后新字符串的首地址作为函数值返回.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char *fun(char *s)
{
    int i, j, k, n;
    char *p, *t;
    n = strlen(s) + 1;
    t = (char *)malloc(n * sizeof(char));
    p = (char *)malloc(n * sizeof(char));
    j = 0;
    k = 0;
    for (i = 0; i < n; i++)
    {
        if (isdigit(s[i])) //? 利用函数'isdigit()'来判断是否是字母字符.
        {
            /**********found**********/
            p[j] = s[i]; //? 存储字母字符.
            j++;
        }
        else
        {
            t[k] = s[i]; //? 存储数字字符.
            k++;
        }
    }
    /**********found**********/
    for (i = 0; i < k; i++) //? 将数字字符追加到字母字符串后.
        p[j + i] = t[i];
    p[j + k] = 0;
    /**********found**********/
    return p; //? 返回新字符串的首地址.
}

void main()
{
    char s[80];

    printf("Please input: ");
    scanf("%s", s);
    printf("\nThe result is: %s\n", fun(s));

    system("pause");
}

/*The result be shown as followed:

Please input: YUbuntu0109.github.io

The result is: 0109YUbuntu.github.io
Press any key to continue . . .

*/
