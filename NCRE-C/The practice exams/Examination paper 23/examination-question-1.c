/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 15:18:34 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 21:58:41
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是: 利用指针数组对形参'ss'所指字符串数组中的字符串按由长到短的顺序排序.并输出排序结果,'ss'所指字符串数组中共有'N'个字符串,且串小于'M'.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define M 8

void fun(char (*ss)[M])
{
    char *ps[N], *tp;
    int i, j, k;

    for (i = 0; i < N; i++)
        ps[i] = ss[i];

    for (i = 0; i < N - 1; i++)
    {
        /**********found**********/
        //? 外循环没循环一次,'k'应保存当前的'i'值.
        k = i;
        for (j = i + 1; j < N; j++)
            /**********found**********/
            if (strlen(ps[k]) < strlen(ps[j]))
                k = j;
        /**********found**********/
        tp = ps[i];
        ps[i] = ps[k];
        ps[k] = tp;
    }

    printf("\nThe string after sorting by length:\n\n");
    for (i = 0; i < N; i++)
        puts(ps[i]);
}

void main()
{
    char ch[N][M] = {"red", "green", "blue", "yellow", "black"};
    int i;

    printf("\nThe original string\n\n");
    for (i = 0; i < N; i++)
        puts(ch[i]);
    printf("\n");

    fun(ch);
    system("pause");
}

/*The result be shown as followed:

The original string

red
green
blue
yellow
black


The string after sorting by length:

yellow
green
black
blue
red
Press any key to continue . . .

*/