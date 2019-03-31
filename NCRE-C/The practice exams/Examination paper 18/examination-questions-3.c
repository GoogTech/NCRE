/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 10:47:09 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 14:03:05
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写一个函数'void fun(int mj,int k,int xx[])',其功能是:将大于整数'm'且紧靠'm'的'k'个素数存入所指的数组中. 
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

//! 如果一个数不能除了'1'和其自身以外的整数除,则这个数为素数.本程序使用循坏语句控制需要判断的数,
//! 在循环体中判断该数是否为素数,若是则存入数组'xx'中.
void fun(int m, int k, int xx[])
{
    int i, j, n = 0;
    //? 找出大于'm'的素数,循坏'k'次,既找出紧靠'm'的'k'个素数.
    for (i = m + 1; n < k; i++) //! 注意: n < k
    {
        //? 判断一个数是否为素数,如果不是,跳出此循环,判断下一个数.
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        //? 如果是素数,放入数组'xx'中.
        if (j >= i)
        {
            xx[n++] = i;
        }
    }
}

void main()
{
    FILE *wf;
    int m, n, zz[1000];

    system("CLS");
    printf("\nPlease enter two integers: ");
    scanf("%d%d", &m, &n);

    fun(m, n, zz);
    for (m = 0; m < n; m++)
        printf("%d ", zz[m]);
    printf("\n ");

    /******************************/
    wf = fopen("out.dat", "w");
    fun(17, 5, zz);
    for (m = 0; m < 5; m++)
        fprintf(wf, "%d ", zz[m]);
    fclose(wf);
    /*****************************/

    system("pause");
}

/*The result be shown as followed:

Please enter two integers: 17 5
19 23 29 31 37
 Press any key to continue . . .

*/
