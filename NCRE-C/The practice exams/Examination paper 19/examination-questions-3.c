/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 15:12:37 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 15:39:29
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写一个函数'int fun(int *s,int t,int *k)',用来找出数组的最大元素的在数组中的下标并将其值存放在'k'所指的存储单元中. 
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int fun(int *s, int t, int *k)
{
    int i;
    *k = 0;
    for (i = 0; i < t; i++)
    {
        if (s[*k] < s[i])
        {
            *k = i;
        }
    }
    return *k;
}

void main()
{
    FILE *wf;
    int a[10] = {876, 675, 896, 101, 301, 401, 980, 431, 451, 777}, k;

    system("CLS");
    fun(a, 10, &k);
    printf("%d, %d\n ", k, a[k]);

    /******************************/
    wf = fopen("out.dat", "w");
    fprintf(wf, "%d, %d", k, a[k]);
    fclose(wf);
    /*****************************/

    system("pause");
}

/*The result be shown as followed:

6, 980
 Press any key to continue . . .

*/