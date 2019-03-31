/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 16:33:26 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 16:59:21
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',其功能是将一个数字字符串转换成其面值相同的长整型整数,可调用'strlen'函数求字符串的长度. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void NONO();

long fun(char *s)
{
    int i, len, sum = 0;
    len = strlen(s);

    for (i = 0; i < len; i++)
    {
        //? 要把一个数字字符转化为相应的数字,只需要用它的'ASCII'码减去'48'即可,
        //? 要把数字字符串转化为相应的数字,则要从左到右依次取出字符转化为相应的数字,乘'10'再加上下一位数字.
        sum = sum * 10 + *s - 48;
        s++;
    }

    return sum;
}

void main()
{
    char s[10];
    long r;

    printf("请输入一个长度不超过9个字符的数字字符串 :  ");
    gets(s);

    r = fun(s);
    printf(" r = %ld\n", r);

    NONO();
    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE *fp, *wf;
    int i;
    long r;
    char s[10], *p;

    fp = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fgets(s, 10, fp);
        p = strchr(s, '\n');
        if (p)
        {
            *p = 0;
        }
        r = fun(s);
        fprintf(wf, "%ld\n", r);
    }
    fclose(fp);
    fclose(wf);
}

/*The result be shown as followed:

请输入一个长度不超过9个字符的数字字符串 :  980109
 r = 980109
Press any key to continue . . .

*/