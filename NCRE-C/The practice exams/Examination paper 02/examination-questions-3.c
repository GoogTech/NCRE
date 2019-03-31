/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 09:29:33 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 10:09:06
 */

/*
 * 函数设计题-题目描述如下:
 * 
 * 已知学生的记录由学号和学习成绩够狠,'N'名名学生的数据已存入'a'结构体数据组中,请编写函数'fun',该函数的功能是:找出成绩最低的学生记录,通过形参返回主函数
 * (规定只有一个最低分).已给出函数的首部,请完成该函数.  
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#define N 10
typedef struct ss
{
    char num[10]; //char
    int score;    //int
} STU;
void fun(STU a[], STU *s)
{
    int i;
    *s = a[0]; //! initialize.
    for (i = 0; i < N; i++)
    {
        if (s->score > a[i].score) //compare.
        {
            *s = a[i]; //! lowest score.
        }
    }
}
void main()
{
    FILE *wf;
    STU a[N] = {{"A01", 81},
                {"A02", 89},
                {"A03", 66},
                {"A04", 87},
                {"A05", 77},
                {"A06", 90},
                {"A07", 79},
                {"A08", 61},
                {"A09", 80},
                {"A10", 71}},m;
    int i;
    system("CLS");
    printf("*****The original data*****\n");
    for (i = 0; i < N; i++)
        printf("No=%s Mark=%d\n", a[i].num, a[i].score);

    fun(a, &m);

    printf("*****THE RESULT*****\n");
    printf("The lowest :%s, %d\n", m.num, m.score);
    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%s, %d", m.num, m.score);
    fclose(wf);
    /*****************************/

    getchar();
}

/*The result be shown as followed : 

*****The original data*****
No=A01 Mark=81
No=A02 Mark=89
No=A03 Mark=66
No=A04 Mark=87
No=A05 Mark=77
No=A06 Mark=90
No=A07 Mark=79
No=A08 Mark=61
No=A09 Mark=80
No=A10 Mark=71
*****THE RESULT*****
The lowest :A08, 61

*/