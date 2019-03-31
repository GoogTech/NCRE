/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 09:45:22 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 10:12:29
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'void fun(int x,int pp[],int *n)',它的功能是:求出能整除'x'且不是偶数的各整数,并按从小到大的顺序放在'pp'所指的数组中,
 * 这些除数同够形参'n'返回. 
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void fun(int x, int pp[], int *n)
{
    int i, j = 0;
    for (i = 1; i <= x; i += 2)
    {
        //? 能被'x'整除.
        if (x % i == 0)
        {
            //? 'n' 默认值为零.
            pp[j++] = i;
        }
    }

    *n = j;
}

void main()
{
    FILE *wf;
    int x, aa[1000], n, i;
    system("CLS");
    printf("\nPlease enter an integer number : \n ");
    scanf("%d", &x);

    fun(x, aa, &n);
    for (i = 0; i < n; i++)
        printf("%d ", aa[i]);
    printf("\n ");

    /******************************/
    wf = fopen("out.dat", "w");
    fun(30, aa, &n);
    for (i = 0; i < n; i++)
        fprintf(wf, "%d ", aa[i]);
    fclose(wf);
    /*****************************/

    system("pause");
}

/*The result be shown as followed:

Please enter an integer number :
 100
1 5 25
 Press any key to continue . . .

*/