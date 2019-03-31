/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 09:16:44 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 09:29:17
 */

/**
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:把形参's'所指字符串中最右边的'n'个字符串复制到形参't'所指字符数组中,形成一个新串,
 * 如's'所指字符串的长度小于'n',则将整个字符串复制到形参't'所指的字符串数组中. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80
void fun(char *s, int n, char *t)
{
    int len, i, j = 0;
    //? 获取字符串's'的长度.
    len = strlen(s);
    /**********found**********/
    //? 全部复制(s->t)
    if (n >= len)
        strcpy(t, s);
    else
    {
        /**********found**********/
        //? 部分复制(s->t).
        for (i = len - n; i <= len - 1; i++)
            t[j++] = s[i];
        /**********found**********/
        //? 结尾加'\0'.
        t[j] = '\0';
    }
}
void main()
{
    char s[N], t[N];
    int n;
    printf("Enter a string:  ");
    gets(s);

    printf("Enter n:");
    scanf("%d", &n);

    fun(s, n, t);
    printf("The string t :  ");
    puts(t);

    system("pause");
}

/*The result be shown as followed:

nter a string:  https://YUbuntu0109.github.io
Enter n:9
The string t :  github.io
Press any key to continue . . .

*/