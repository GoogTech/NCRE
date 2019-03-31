/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-26 08:00:12 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-26 08:08:42
 */

/*
 * 程序改错题-题目描述如下:
 * 
 * 函数'fun'的功能是:在字符串的最前端加入'n'个'*'号,形成新串并覆盖原串. (字符串的长度最大允许为'79')
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char s[], int n)
{
    char a[80], *p;
    int i;

    /**********found***********/
    p = s;
    for (i = 0; i < n; i++)
        a[i] = '*';
    do
    {
        a[i] = *p;
        i++;
    } while (*p++);

    a[i] = 0;
    strcpy(s, a);
}

void main()
{
    int n;
    char s[80];

    printf("\nEnter a string  :  ");
    gets(s);

    printf("\nThe string \"%s\"\n", s);
    printf("\nEnter n ( number of * )  :  ");
    scanf("%d", &n);

    fun(s, n);
    printf("\nThe string after insert : \"%s\" \n", s);

    system("pause");
}

/*The result be shown as followed:

Enter a string  :  https://yubuntu0109.github.io

The string "https://yubuntu0109.github.io"

Enter n ( number of * )  :  6

The string after insert : "******https://yubuntu0109.github.io"
Press any key to continue . . .

*/