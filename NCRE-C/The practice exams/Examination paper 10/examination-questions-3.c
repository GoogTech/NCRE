/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 18:47:36 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 18:47:56
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写一个函数,用来删除字符串中的所有空格. 
 */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <stdlib.h>

void fun(char *str)
{
    int i = 0;
    char *p = str;
    while (*p)
    {
        if (*p != ' ')
        {
            str[i++] = *p;
        }
        p++;
    }
    str[i] = '\0';
}

void main()
{
    char str[81];
    char Msg[] = "Input a string:";
    //int n;
    FILE *out;

    printf(Msg);
    gets(str);
    //puts(str);

    fun(str);
    printf("*** str: %s\n", str);

    /******************************/
    out = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 10//out.dat", "w");
    fun(Msg);
    fprintf(out, "%s", Msg);
    fclose(out);
    /******************************/

    system("pause");
}

/*The result be shown as followed:

Input a string:Data structures and algorithm analysis in C.
*** str: DatastructuresandalgorithmanalysisinC.
Press any key to continue . . .

*/