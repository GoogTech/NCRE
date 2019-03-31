/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 15:42:28 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 16:04:25
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:先从键盘上输入一个'3'行,'3'列的矩阵各个元素的值,然后输出主对角线元素之和. 
 */

#include <stdio.h>
void fun()
{
    int a[3][3], sum;
    int i, j;
    /*************found**************/
    sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            /*************found**************/
            scanf("%d", &a[i][j]);
    }
    for (i = 0; i < 3; i++)
        sum = sum + a[i][i];
    printf("Sum=%d\n", sum);
}
void main()
{
    fun();

    system("pause");
}

/*The result be shown as followed:

1 2 3
4 5 6
7 8 9
Sum=15
Press any key to continue . . .

*/
