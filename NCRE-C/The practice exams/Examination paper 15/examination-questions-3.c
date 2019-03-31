/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 15:06:16 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 15:15:15
 */

/* 
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',其功能是: 将'a','b'中的两个正整数合并形成一个新的整数放在'c'中,合并的方式是:
 * 将'a'中的十位和个位依次放在变量'c'的十位和千位上,'b'中的十位和个位数依次放在变量'c'的个位和百位上.
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int a, int b, long *c)
{
    //? 取十位数的方式: number/10
    //? 取个位数的方式: number%10
    *c = (a % 10) * 1000 + (b % 10) * 100 + (a / 10) * 10 + (b / 10);
}

void main()
{
    int a, b;
    long c;
    void NONO();

    printf("Input a, b:");
    scanf("%d%d", &a, &b);

    fun(a, b, &c);
    printf("The result is: %ld\n", c);
    NONO();

    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE *rf, *wf;
    int i, a, b;
    long c;

    rf = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fscanf(rf, "%d,%d", &a, &b);
        fun(a, b, &c);
        fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c);
    }
    fclose(rf);
    fclose(wf);
}

/*The result be shown as followed:

Input a, b:45 12
The result is: 5241
Press any key to continue . . .

*/