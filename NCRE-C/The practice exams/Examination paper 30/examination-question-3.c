/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 17:20:26 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 17:28:23
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',其功能是:去掉一组得分中最高分和一个最低分,然后求平均值,并通过函数返回.函数形参'a'指向存放得分的数组,
 * 形参'n'中存放得分个数(n>2). 
 */

#include <stdio.h>
#include <stdlib.h>

void NONO();
double fun(double a[], int n)
{
    int i;
    double sum = 0.0, max, min;
    max = min = a[0];

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    sum = sum - max - min;
    return (sum / (n - 2));
}

void main()
{
    double b[10], r;
    int i;
    printf("输入10个分数放入b数组中 :  ");
    for (i = 0; i < 10; i++)
        scanf("%lf", &b[i]);

    printf("输入的10个分数是 :  ");
    for (i = 0; i < 10; i++)
        printf("%4.1lf ", b[i]);

    printf("\n");
    r = fun(b, 10);
    printf("去掉最高分和最低分后的平均分 :  %f\n", r);

    NONO();
    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE *fp, *wf;
    int i, j;
    double b[10], r;

    fp = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            fscanf(fp, "%lf ", &b[j]);
        }
        r = fun(b, 10);
        fprintf(wf, "%f\n", r);
    }
    fclose(fp);
    fclose(wf);
}

/*The result be shown as followed:

输入10个分数放入b数组中 :  1 2 3 4 5 6 7 8 9 10
输入的10个分数是 :   1.0  2.0  3.0  4.0  5.0  6.0  7.0  8.0  9.0 10.0
去掉最高分和最低分后的平均分 :  5.500000
Press any key to continue . . .

*/