/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 17:00:20 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 17:14:32
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的作用是:统计整型变量'm'中各数组出现的次数,并存放到数组'a'中,其中:'a[0]'存放'0'出现的次数,'a[1]'存放'1'出现的次数···'a[9]'存放'9'出现的次数.
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int m, int a[10])
{
    int i;
    for (i = 0; i < 10; i++)
        /**********found**********/
        a[i] = 0;
    while (m > 0)
    {
        /**********found**********/
        i = m % 10; //? 'm%10'可得到数'm'的最后一个数字.
        a[i]++;
        /**********found**********/
        m = m / 10; //? 'm/10'可使数字截短,既去掉最后一位.
    }
}

void main()
{
    int m, a[10], i;

    printf("请输入一个整数 :  ");
    scanf("%d", &m);

    fun(m, a);
    for (i = 0; i < 10; i++)
        printf("%d,", a[i]);
    printf("\n");

    system("pause");
}

/*The result be shown as followed:

请输入一个整数 :  14579233
0,1,1,2,1,1,0,1,0,1,
Press any key to continue . . .

*/