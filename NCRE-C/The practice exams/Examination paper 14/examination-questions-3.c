/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 14:30:45 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 14:44:10
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写一个函数'fun',其功能是: 将'ss'所指字符串中所有下标为奇数的位置的字母转换为大写(若该位置上不是字母,则不转换).
 */

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void fun(char *ss)
{
    int i;
    for (i = 0; ss[i] != '\0'; i++)
    {
        if ((i % 2 != 0) && (ss[i] >= 'a' && ss[i] <= 'z')) //? ss[i]<='z' : 判断是否为小写字母.
        {
            ss[i] = ss[i] - 32;
        }
    }
}

void main()
{
    FILE *wf;
    char tt[81], s[81] = "abc4Efg";

    system("CLS");
    printf("\nPlease enter an string within 80 characters:\n");
    gets(tt);
    printf("\n\nAfter changing, the string\n  %s", tt);

    fun(tt);
    printf("\nbecomes\n %s\n", tt);

    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 14//out.dat", "w");
    fun(s);
    fprintf(wf, "%s", s);
    fclose(wf);
    /*****************************/

    getchar();
}

/*The result be shown as followed:


Please enter an string within 80 characters:
https://YUbuntu0109.github.io


After changing, the string
  https://YUbuntu0109.github.io
becomes
 hTtPs://YUbUnTu0109.gItHuB.Io

*/