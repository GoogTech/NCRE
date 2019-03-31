/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 16:05:20 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 16:15:52
 */

/*
 * 程序设计题-题目描述如下所示:
 * 
 * 请编写程序,实现矩阵(三行三列)的转置(既行列互换). 
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void fun(int array[3][3])
{
    int i, j, t;
    
    /*
     * 实现矩阵转置.既将右上角元素和左下角元素对换,通过数据元素交换方法完成矩阵转置操作. 
     * 因为对矩阵转置后仍然存回本身,所以只能循环矩阵中的一个角(本程序是右上半角).
     * 控制右上半三角的方法是在内循环中循环变量'j'从'i+1'/'i'开始.
     */
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            t = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = t;
        }
    }
}

void main()
{
    FILE *wf;
    int i, j;
    int array[3][3] = {{100, 200, 300},
                       {400, 500, 600},
                       {700, 800, 900}};

    system("CLS");
    printf("The original array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%7d ", array[i][j]);
        printf("\n ");
    }

    fun(array);
    printf("Converted array:\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%7d ", array[i][j]);
        printf("\n ");
    }

    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 07//out.dat", "w");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            fprintf(wf, "%7d ", array[i][j]);
        fprintf(wf, "\n");
    }
    fclose(wf);
    /*****************************/

    getchar();
}


/*The result be shown as followed:

The original array:
     100     200     300
     400     500     600
     700     800     900
 Converted array:
     100     400     700
     200     500     800
     300     600     900
*/