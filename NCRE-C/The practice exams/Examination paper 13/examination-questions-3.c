/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 13:45:09 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 14:02:42
 */

/*
 * 程序设计题-题目描述如下: 
 * 
 * 请编写函数'fun',其功能是: 将's'所指字符串中下标为偶数同时'ASCII'值为奇数的字符删去,'S'所指串中剩余的字符形成的新串放在't'所指的数组中.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *s, char t[])
{
    int i, j = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (!((i % 2 == 0) && (s[i] % 2))) //? 满足:字符串下标为偶数且'ASCII'值为奇数.
        {
            t[j++] = s[i];
        }
    }
    t[j] = '\0'; //SAME AS : t[j] = 0;
}

void main()
{
    char s[100], t[100];
    void NONO();
    printf("\nPlease enter string S:");
    scanf("%s", s);

    fun(s, t);
    printf("\nThe result is: %s\n", t);

    NONO();

    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    char s[100], t[100];
    FILE *rf, *wf;
    int i;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fscanf(rf, "%s", s);
        fun(s, t);
        fprintf(wf, "%s\n", t);
    }
    fclose(rf);
    fclose(wf);
}

/*The result be shown as followed:

Please enter string S:ABCDEFG12345

The result is: BDF12345
Press any key to continue . . .

*/
