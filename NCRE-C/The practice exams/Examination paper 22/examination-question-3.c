/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 15:00:41 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 15:17:07
 */

/*
 * 程序修改题-题目描述如下:
 *  
 * 请编写函数'fun',其功能是:计算并输出多项式的值: S = 1/1x2 + 1/2x3 + ··· 1/nx(n+1)
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

double fun(int n)
{
    int i;
    double result = 0.0;
    for (i = 1; i <= n; i++)
    {
        result = result + 1. 0 / (i * (i + 1));
    }

    return result;
}

void main()
{
    FILE *wf;
    system("CLS");
    printf("%f\n", fun(10));
    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 22//out.dat", "w");
    fprintf(wf, "%f", fun(10));
    fclose(wf);
    /*****************************/

    system("pause");
}
