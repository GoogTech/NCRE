/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 14:52:45 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-25 14:58:57
 */

/* 
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是:求出'S'的值 : S = 2²/1x3 * 4²/3x5 * 6²/5x7 * ··· (2k)²/(2k-1)*(2k-1)
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

/*************found**************/
double fun(int k)
{
    int n;
    float s, w, p, q;
    n = 1;
    s = 1.0;
    while (n <= k)
    {
        w = 2.0 * n;
        p = w - 1.0;
        q = w + 1.0;
        s = s * w * w / p / q;
        n++;
    }
    /*************found**************/
    return s;
}

void main()
{
    system("CLS");
    printf("%f\n ", fun(10));

    system("pause");
}

/*

1.533852
 Press any key to continue . . .

*/