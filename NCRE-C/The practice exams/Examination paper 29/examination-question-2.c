/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 16:18:19 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 16:32:59
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 规定输入的字符串全部为字母,'fun'函数的功能是:统计'a'所指字符串中每个字母在字符串中出现的次数(统计时不区分大小写)
 * 并将出现次数最高的字母输出(如果有多个相同,输出一个即可). 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char a[])
{
    int b[26], i, n, max;

    for (i = 0; i < 26; i++)
        /**********found**********/
        b[i] = 0;

    n = strlen(a);
    for (i = 0; i < n; i++)
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            /**********found**********/
            b[a[i] - 'a']++; //? 小写字母的'ASCII'码减去'a'的'ASCII'既为相应字母的下标值.
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            b[a[i] - 'A']++;
        }
    max = 0;

    for (i = 1; i < 26; i++)
    {
        /**********found**********/
        if (b[max] < b[i])
            max = i;
    }

    printf("出现次数最多的字符是 :  %c\n", max + 'a');
}

void main()
{
    char a[200];

    printf("请输入一个待统计的字符串 :   ");
    scanf("%s", a);
    fun(a);

    system("pause");
}

/*The result be shown as followed:

请输入一个待统计的字符串 :   https://YUbuntu0109.github.io
出现次数最多的字符是 :  t
Press any key to continue . . .

*/