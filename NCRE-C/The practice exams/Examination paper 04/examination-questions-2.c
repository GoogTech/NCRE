/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 13:19:34 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 13:31:08
 */

/*
 * 程序修改题-题目描述如下：
 * 
 * 此程序的功能是:读取一个英文文本行,将其中每个单词的第一个字母改成大写,然后输出慈文本行('单词'是指由空格隔开的字符串) 
 */

#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/*************found**************/
void upfst(char *p)
{
    int k = 0;
    for (; *p; p++) //! p++ : next.
        if (k)      // Same as while();
        {
            if (*p == ' ')
                k = 0; //false
        }
        else
        {
            if (*p != ' ')
            {
                k = 1; //true
                *p = toupper(*p);
            }
        }
}
void main()
{
    char chrstr[81];
    system("CLS");
    printf("\nPlease enter an English text line: ");
    gets(chrstr);

    printf("\nBofore changing:\n  %s", chrstr);
    upfst(chrstr);
    printf("\nAfter changing:\n  %s\n", chrstr);

    getchar();
}

/*The result be shown as followed:

Please enter an English text line: good afternoon .

Bofore changing:
  good afternoon .
After changing:
  Good Afternoon .

*/