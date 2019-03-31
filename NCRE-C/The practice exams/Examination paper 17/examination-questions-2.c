/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 09:29:22 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 09:45:18
 */

/**
 * 程序修改题-题目要求如下:
 * 
 * 函数'fun'的功能是:找出一个大于给定整数'm'且紧随'm'的素数,并作为函数值返回.
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int fun(int m)
{
    int i, k;
    //? 遍历大于'm'的整数.
    for (i = m + 1;; i++)
    {
        //? 遍历所有条件内(大于m+1)的素数.
        for (k = 2; k < i; k++)
            /*************found**************/
            //? 判断当前数是否为素数.
            if (i % k == 0)
                break;
        /*************found**************/
        //? 如果'i'是素数则循环结束时(k==i),将该值返回.
        if (k == i)
            return (i);
    }
}

void main()
{
    int n;

    system("CLS");
    printf("\nPlease enter n: ");
    scanf("%d", &n);
    printf("%d\n", fun(n));

    system("pause");
}

/*The result be shown as followed:

Please enter n: 100
101
Press any key to continue . . .

*/