/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 18:30:44 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 19:46:22
 */

/*
 * 程序设计题-题目描述如下:
 *
 * 请编写函数'fun',它的功能是:求小于形参'n'同时能被'3'与'7'整除的所有自然数之和的平方根.并作为函数值返回.
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double fun(int n)
{
    int i;
    double sum = 0.0;
    for (i = 21; i < n; i++) //? i = 21 : 优化算法.
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            sum += i;
        }
    }

    //? 利用'sqrt()'函数来计算'sum'的平方根,并作为函数的返回值.
    return sqrt(sum);
}

void main() /* 主函数 */
{
    void NONO();
    printf("s =%f\n", fun(1000));
    NONO();

    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件. */
    FILE *fp, *wf;
    int i, n;
    double s;

    fp = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 21//in.dat", "r");
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 21//out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fscanf(fp, "%d", &n);
        s = fun(n);
        fprintf(wf, "%f\n", s);
    }
    fclose(fp);
    fclose(wf);
}

/*The result be shown as followed:

s =153.909064
Press any key to continue . . .

*/