/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 21:31:47 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 21:38:53
 */

/*
 * 程序改错题-题目描述如下:
 * 
 * 函数'fun'的功能是:比较两个字符串,将长的字符串的首地址作为函数值返回. 
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

/*************found**************/
//? 函数'fun'是以字符串格式输出的,所以定义函数时应为: 'char *fun(char *s,char *t)'.
char *fun(char *s, char *t)
{
    int s1 = 0, t1 = 0;
    char *ss, *tt;
    ss = s;
    tt = t;

    while (*ss)
    {
        s1++;
        /*************found**************/
        ss++;
    }
    while (*tt)
    {
        t1++;
        /*************found**************/
        tt++;
    }
    if (t1 > s1)
        return t;
    else
        return s;
}

void main()
{
    char a[80], b[80];

    printf("\nEnter a string : ");
    gets(a);

    printf("\nEnter a string again: ");
    gets(b);

    printf("\nThe longer is :\n\n%s\n", fun(a, b));
    system("pause");
}

/*The result be shown as followed:

Enter a string : StringA

Enter a string again: StringBB

The longer is :

StringBB
Press any key to continue . . .

*/