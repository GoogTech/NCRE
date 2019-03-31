/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 14:18:15 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 14:30:41
 */

/*
 * 程序修改题-题目描述如下: 
 * 
 * 函数'fun'的功能是:读入一个字符串(长度<20),将该字符串中的所有字符'ASCII'码值升序后输出. 
 */

#include <string.h>
#include <stdio.h>

void fun(char t[])
{
    char c;
    int i, j;
    /*************found**************/
    for (i = strlen(t) - 1; i; i--) //? 数组最大下标值为其长度减一.
        for (j = 0; j < i; j++)
            /*************found**************/
            if (t[j] > t[j + 1]) //? 升序排序
            {
                c = t[j];
                t[j] = t[j + 1];
                t[j + 1] = c;
            }
}

void main()
{
    char s[81];

    printf("\nPlease  enter a character string :");
    gets(s);
    printf("\n\nBefore sorting :\n  %s", s);

    fun(s);
    printf("\nAfter sorting decendingly:\n %s", s);

    getchar();
}

/*The result be shown as followed:

Please  enter a character string :edcba

Before sorting :
  edcba
After sorting decendingly:
 abcde

*/