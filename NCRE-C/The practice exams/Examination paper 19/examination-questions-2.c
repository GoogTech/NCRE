/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 14:17:07 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 14:25:24
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:从'n'个学生的成绩中统计出低于平均分的学生个数,此人数作为函数值返回,平均分存放在形参'aver'所指的存储单元中. 
 */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define N 20
int fun(float *s, int n, float *aver)
{
    float ave, t = 0.0;
    int count = 0, k, i;

    for (k = 0; k < n; k++)
        /*************found**************/
        t += s[k];
    ave = t / n;

    for (i = 0; i < n; i++)
        if (s[i] < ave)
            count++;
    /*************found**************/
    *aver = ave;

    return count;
}

void main()
{
    float s[30], aver;
    int m, i;

    system("CLS");
    printf("\nPlease enter m: ");
    scanf("%d", &m);

    printf("\nPlease enter %d mark :\n", m);
    for (i = 0; i < m; i++)
        scanf("%f", s + i);

    printf("\nThe number of students :%d\n", fun(s, m, &aver));
    printf("Ave=%f\n", aver);
    system("pause");
}

/*The result be shown as followed:

Please enter m: 8

Please enter 8 mark :
80.5 60 72 90.5 98 51.5 88 64

The number of students :4
Ave=75.562500
Press any key to continue . . .

*/
