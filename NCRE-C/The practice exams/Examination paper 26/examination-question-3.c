/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 14:19:27 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 14:29:20
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 请编写函数'fun',其功能是:统计's'所指字符串汇总数字字符个数,并作为函数值返回. 
 */

#include <stdio.h>
#include <stdlib.h>

void NONO();
int fun(char *s)
{
    int num = 0;
    char *p;
    for (p = s; *p != '\0'; p++)
    {
        if ((*p >= '0') && (*p <= '9'))
        {
            num++;
        }
    }
    return num;
}

void main()
{
    char *s = "2def35adh25  3kjsdf 7/kj8655x";
    printf("%s\n", s);
    printf("%d\n", fun(s));

    NONO();
    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE *fp, *wf;
    int i;
    char s[256];

    fp = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fgets(s, 255, fp);
        fprintf(wf, "%d\n", fun(s));
    }

    fclose(fp);
    fclose(wf);
}

/*The result be shown as followed:

2def35adh25  3kjsdf 7/kj8655x
11
Press any key to continue . . .

*/