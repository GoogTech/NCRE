/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 12:01:15 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 12:12:30
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 轻编写函数'fun',该函数的功能是:将'M'行'N'列的二维数组中的数据,按行的顺序放到一维数组中,一维数组中的数据个数存在形参'n'所指的存储单元中.
 */

#include <stdio.h>

void fun(int (*s)[10], int *b, int *n, int mm, int nn) // w[10][10],a[100],0,3,4
{
    int i, j, k = 0;
    for (i = 0; i < mm; i++)
    {
        for (j = 0; j < nn; j++)
        {
            b[k++] = s[i][j];
        }
    }
    *n = k; //? the number of element.
}

void main()
{
    FILE *wf;
    int w[10][10] = {{33, 33, 33, 33}, {44, 44, 44, 44}, {55, 55, 55, 55}}, i, j;
    int a[100] = {0}, n = 0;

    printf("The matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%3d", w[i][j]);
        printf("\n");
    }

    fun(w, a, &n, 3, 4);
    printf("The A array:\n");
    for (i = 0; i < n; i++)
        printf("%3d", a[i]);
    printf("\n\n");

    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 12//out.dat", "w");
    for (i = 0; i < n; i++)
        fprintf(wf, "%3d", a[i]);
    fclose(wf);
    /*****************************/

    getchar();
}

/*The result be shown as followed:

The matrix:
 33 33 33 33
 44 44 44 44
 55 55 55 55
The A array:
 33 33 33 33 44 44 44 44 55 55 55 55

*/