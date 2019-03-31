/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 19:19:42 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 19:34:39
 */

/*
 * 程序设计题-题目描述如下： 
 * 
 * 请编写函数'int fun(int lim,int aa[MAX])',其功能是求出小于或等于'lim'的所有素数并放在'aa'数组中,并返回所求出的素数的个数. 
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int fun(int lim, int aa[MAX])
{
    int i, j, k = 0;
    //1-查找小于'lim'的所有数.
    for (i = 2; i <= lim; i++)
    {
        //2-素数的判定方法.
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        //3-存储素数.
        if (j >= i)
        {
            aa[k++] = i;
        }
    }
    return k;
}

void main()
{
    FILE *wf;
    int limit, i, sum;
    int aa[MAX];

    system("CLS");
    printf("输入一个整数:");
    scanf("%d", &limit);

    sum = fun(limit, aa);

    for (i = 0; i < sum; i++)
    {
        if (i % 10 == 0 && i != 0) /*每行输出10个数*/
            printf("\n ");
        printf("%5d ", aa[i]);
    }

    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 08//out.dat", "w");
    sum = fun(15, aa);
    for (i = 0; i < sum; i++)
    {
        if (i % 10 == 0 && i != 0) /*每行输出10个数*/
            fprintf(wf, "\n");
        fprintf(wf, "%5d ", aa[i]);
    }
    fclose(wf);
    /*****************************/

    printf("\n");
    system("pause");
}

/*The result be shown as followed:

输入一个整数:100
    2     3     5     7    11    13    17    19    23    29
    31    37    41    43    47    53    59    61    67    71
    73    79    83    89    97
Press any key to continue . . .

*/
