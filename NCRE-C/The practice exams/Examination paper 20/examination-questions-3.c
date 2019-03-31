/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 17:57:38 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 18:10:03
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',其功能是:根据以下公式求'P'的值,结果由函数值带回.'m'与'n'为两个正整数且要求'm>n'. 
 * 
 * p = m!/n!(m-n)!
 */

#include <stdio.h>
#include <stdlib.h>

float fun(int m, int n)
{
    float p1 = 1, p2 = 1, p3 = 1;
    int i;

    //! 通过三个'for'循环分别计算阶乘: p1 = m!, p2 = n!, p3 = (m-n)!
    for (i = 1; i <= m; i++)
    {
        p1 *= i;
    }
    for (i = 1; i <= n; i++)
    {
        p2 *= i;
    }
    for (i = 1; i <= (m - n); i++)
    {
        p3 *= i;
    }

    return p1 / (p2 * p3);
}

void main() /* 主函数 */
{
    void NONO();
    printf("P=%f\n", fun(12, 8));
    NONO();

    system("pause");
}

void NONO()
{ /* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
    FILE *fp, *wf;
    int i, m, n;
    float s;

    fp = fopen("in.dat", "r");
    wf = fopen("out.dat", "w");
    for (i = 0; i < 10; i++)
    {
        fscanf(fp, "%d,%d", &m, &n);
        s = fun(m, n);
        fprintf(wf, "%f\n", s);
    }
    fclose(fp);
    fclose(wf);
}

/*The result be shown as followed:

P=495.000000
Press any key to continue . . .

*/