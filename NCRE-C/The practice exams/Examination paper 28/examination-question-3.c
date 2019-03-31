/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 15:52:07 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 16:07:57
 */

/*
 * 程序设计题-题目描述下:
 * 
 * 请编写函数'fun',其功能是将形参's'所指字符串放入形参'a'所指的字符数组中,使'a'中存放同样的字符串.
 * 说明:不得使用系统提供的字符串函数.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 20

void NONO();
void fun(char *a, char *s)
{
    while (*s != '\0')
    {
        *a = *s;
        a++;
        s++;
    }

    *a = '\0';
}

void main()
{
    char s1[N], *s2 = "abcdefghijk";
    fun(s1, s2);
    printf("%s\n", s1);
    printf("%s\n", s2);

    NONO();
    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE *fp, *wf;
    int i;
    char s1[256], s2[256];

    fp = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fgets(s2, 255, fp);
        fun(s1, s2);
        fprintf(wf, "%s", s1);
    }
    fclose(fp);
    fclose(wf);
}

/*The result be shown as followed:

abcdefghijk
abcdefghijk
Press any key to continue . . .

*/