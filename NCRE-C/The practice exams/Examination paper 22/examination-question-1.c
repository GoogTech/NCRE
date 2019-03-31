/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 14:39:20 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 14:51:08
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:找出形参's'所指字符串中出现频率最高的字母(不区分大小写),并统计出其出现的次数. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void fun(char *s)
{
    int k[26] = {0}, n, i, max = 0;
    char ch;
    while (*s)
    {
        //? isalpha(): 判断当前字符是否为字母.
        if (isalpha(*s))
        {
            /**********found**********/
            //? tolower(): 将当前字母转换为小写字母.
            ch = tolower(*s);
            n = ch - 'a';
            /**********found**********/
            //? 把该字母出现的个数累加到指定的数组中.
            k[n] += 1;
        }
        s++;
        /**********found**********/
        //? 'max'用来记录出现次数最高的字母的出现次数.
        if (max < k[n])
            max = k[n];
    }

    printf("\nAfter count :\n");
    for (i = 0; i < 26; i++)
        if (k[i] == max)
            printf("\nletter  \'%c\' :  %d times\n", i + 'a', k[i]);
}

void main()
{
    char s[81];
    printf("\nEnter a string:\n\n");
    gets(s);
    fun(s);

    system("pause");
}

/*

Enter a string:

https://YUbuntu0109.github.io

After count :

letter  't' :  4 times

letter  'u' :  4 times
Press any key to continue . . .

*/