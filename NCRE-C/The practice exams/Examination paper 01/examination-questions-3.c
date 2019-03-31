/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-19 23:46:25 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-19 23:57:37
 */

/*
 * 程序设计题-题目描述:
 * 编写函数'fun',该函数的功能是：统计一行字符串中单词的个数,作为函数值返回.字符串在主函数中输入,
 * 规定所有单词由小写字母组成,单词之间有若干个空格隔开,一行的开始没有空格. 
 */

#include <string.h>
#include <stdio.h>
#define N 80
int fun(char *s)
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if ((s[i] != ' ') && (s[i + 1] == ' ' || s[i + 1] == '\0'))
        {
            j++;
        }
    }
    return j;
}
void main()
{
    FILE *wf;
    char fileanme[] = "out.dat";
    char line[N];
    int num = 0;

    printf("Enter a string:\n ");
    gets(line);
    num = fun(line);
    printf("The number of word is:%d\n\n ", num);

    /******************************/
    wf = fopen(fileanme, "w");
    fprintf(wf, "%d", fun("a big car"));
    fclose(wf);
    /*****************************/

    getchar();
}

/*The result be shown as followed:

Enter a string:
good luck to you !
The number of word is:5

*/
