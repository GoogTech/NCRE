/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 15:36:14 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 15:40:19
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',它的功能是计算列级数和,和值由函数值返回: S = 1 + x + x²/2! + x²/3! + ··· x(n次方)
 */

#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double fun(double x, int n)
{
    int i;
    //? 's1'表示每项的分母,既各项的阶乘.
    double s = 1.0, s1 = 1.0;
    for (i = 1; i <= n; i++)
    {
        //? 各项中的阶乘.
        s1 *= i;
        //? pow():乘方函数,求出'x'的'i'次方.
        s += pow(x, i) / s1;
    }

    return s;
}

void main()
{
    FILE *wf;
    system("CLS");
    printf("%f ", fun(0.3, 10));

    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%f", fun(0.3, 10));
    fclose(wf);
    /*****************************/

    printf("\n");
    system("pause");
}

/*The result be shown as followed:

1.349859
Press any key to continue . . .

*/
