/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 17:04:06 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 17:29:03
 */

/* 
 * 程序设计题-题目描述如下:
 * 
 * 请编写一个函数,其功能是:从传入的'num'个字符中找出最长的一个字符串,并通过形参指针'max'传回该串地址(用'#'作为结束输入的标识).
 */

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *fun(char (*a)[81], int num, char *max)
{
    int i = 0;
    max = a[0];
    for (i = 0; i < num; i++)
    {
        if (strlen(max) < strlen(a[i]))
        {
            max = a[i];
        }
    }
    return max;
}

void main()
{
    FILE *wf;
    char ss[10][81], *ps = NULL;
    char s[3][81] = {"abcd", "deg", "diegns"}, *p = NULL;
    int i = 0, n;

    system("CLS");
    printf("输入若干个字符串：");
    gets(ss[i]);
    puts(ss[i]);

    while (!strcmp(ss[i], "#") == 0) /*用4个星号作为结束输入的标志*/
    {
        i++;
        gets(ss[i]);
        //puts(ss[i]);
    }
    n = i; //! attention the variable.
    ps = fun(ss, n, ps);
    printf("\nmax=%s\n", ps);

    /******************************/
    wf = fopen("out.dat", "w");
    p = fun(s, 3, p);
    fprintf(wf, "%s", p);
    fclose(wf);
    /*****************************/

    getchar();
}

/*The result be shown as followed:

输入若干个字符串：C
C
C++
Java
Linux
Ubuntu
Data structures and algorithms
#

max=Data structures and algorithms

*/
