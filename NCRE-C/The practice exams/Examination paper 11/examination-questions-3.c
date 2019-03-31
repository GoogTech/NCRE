/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 19:35:33 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 19:46:35
 */

/*
 * 程序设计题-题目描述如下: 
 * 
 * 请编写函数'fun',该函数的功能是:判断字符串是否为回文.若是,则返回'1',主函数中输出'YES'.否则返回'0',主函数中输出'NO'.
 */

#include <stdio.h>
#define N 80

int fun(char *str)
{
    int i, flag = 1, n = 0;
    char *p = str;

    while (*p)
    {
        n++;
        p++;
    }

    for (i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            return 0;
        }
    }
    return flag;
}

void main()
{
    char s[N];
    FILE *out;
    char *test[] = {"1234321", "123421", "123321", "abcdCBA"};
    int i;

    printf("Enter a string : ");
    gets(s);
    printf("\n\n");

    //puts(s);
    if (fun(s))
        printf("YES\n");
    else
        printf("NO\n");

    /************************************/
    out = fopen("out.dat", "w");
    for (i = 0; i < 4; i++)
        if (fun(test[i]))
            fprintf(out, "YES\n");
        else
            fprintf(out, "NO\n");
    fclose(out);
    /************************************/

    getchar();
}

/*The result be shown as followed:

Enter a string : 123321
YES

Enter a string : 111222
NO

*/