/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 17:51:33 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 17:56:40
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:给定'n'个实数,输出平均值,并统计平均值以上(包含平均值)的实数的个数. 
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int fun(float x[], int n)
{

    /************found************/
    int j, c = 0;
    float xa = 0.0;

    //? 求出平均值.
    for (j = 0; j < n; j++)
        xa += x[j] / n;
    printf("ave =%f\n", xa);

    for (j = 0; j < n; j++)
        /************found************/
        if (x[j] >= xa)
            c++;

    return c;
}

void main()
{
    float x[100] = {193.199, 195.673, 195.757, 196.051, 196.092, 196.596, 196.579, 196.763};

    system("cls");
    printf("%d\n", fun(x, 8));
    system("pause");
}

/*The result be shown as followed:

ave =195.838745
5
Press any key to continue . . .

*/