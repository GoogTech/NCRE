/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 22:11:49 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 10:12:13
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 在此程序中,'m'个人的成绩存放在'score'数组中,请编写函数'fun',它的功能是: 请将低于平均数的人数作为函数值返回,将低于平均数的分数放在'below'
 * 所指的数组中. 
 */

#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fun(int score[], int m, int below[], float *average_score)
{
    int i, k = 0;
    float average = 0.0;

    //? 求出分数平均值.
    for (i = 0; i < m; i++)
    {
        average += score[i] / m;
    }
    //? 如果分数低于平均数,则将此分数放入'below'数组中.
    for (i = 0; i < m; i++)
    {
        if (average > score[i])
        {
            below[k++] = score[i];
        }
    }

    *average_score = average;

    //? 返回低于平均数的人数.
    return k;
}

void main()
{
    FILE *wf;
    int i, n, below[9];
    float average_score;
    int score[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    system("CLS");
    n = fun(score, 9, below, &average_score);

    printf("\nThe average score: %f", average_score);

    printf("\nBelow the average score are: ");
    for (i = 0; i < n; i++)
        printf("%d ", below[i]);

    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 16//out.dat", "w");
    for (i = 0; i < n; i++)
        fprintf(wf, "%d ", below[i]);
    fclose(wf);
    /*****************************/

    getchar();
}

/*The result be shown as followed:

The average score: 46.000000
Below the average score are: 10 20 30 40

*/