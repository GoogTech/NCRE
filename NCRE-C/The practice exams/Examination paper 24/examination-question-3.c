/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 21:39:15 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 21:58:16
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',其功能是:移动字符串中的内容,移动的规则是把'1->m'个字符平移到字符串的最后,把'm+1'到最后的字符移到字符串的前部. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 80

void fun(char *w, int m)
{
    int i, j;
    char temp;
    //? 进行'm'次循环左移.
    for (i = 0; i < m; i++)
    {
        temp = w[0];
        //? 将第二个字符开始以后的每个字符都依次前移一个字符.
        for (j = 1; w[j] != '\0'; j++)
        {
            w[j - 1] = w[j];
        }
        //? 将第一个字符放到最后一个字符中.
        w[j - 1] = temp;
    }
}

void main()
{
    FILE *wf;
    char a[N] = "ABCDEFGHIJK", b[N] = "ABCDEFGHIJK";
    int m;

    printf("The origina string :\n");
    puts(a);

    printf("\n\nEnter  m: ");
    scanf("%d", &m);

    fun(a, m);
    printf("\nThe string after moving :\n");
    puts(a);

    printf("\n\n");
    /******************************/
    wf = fopen("out.dat", "w");
    fun(b, 3);
    fprintf(wf, "%s", b);
    fclose(wf);
    /*****************************/

    system("pause");
}

/*The result be shown as followed:

The origina string :
ABCDEFGHIJK

Enter  m: 3

The string after moving :
DEFGHIJKABC

Press any key to continue . . .

*/