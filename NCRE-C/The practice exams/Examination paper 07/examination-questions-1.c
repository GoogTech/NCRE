/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 15:29:43 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 15:42:21
 */

/*
 * 程序填空题-题目描述如下： 
 * 
 * 函数'fun'的功能是: 调用随机函数产生'20'个互不相同的整数放在形参'a'所指数组中(此数组在主函数中已置0).
 */

#include <stdlib.h>
#include <stdio.h>
#define N 20

void fun(int *a)
{
    int i, x, n = 0;
    x = rand() % 20;
    /**********found**********/
    while (n < N)
    {
        for (i = 0; i < n; i++)
            /**********found**********/
            if (x == a[i])
                break;
        /**********found**********/
        if (i == n) //! i==n
        {
            a[n] = x;
            n++;
        }
        x = rand() % 20;
    }
}
void main()
{
    int x[N] = {0}, i;
    fun(x);

    printf("The result :  \n");
    for (i = 0; i < N; i++)
    {
        printf("%4d", x[i]);
        if ((i + 1) % 5 == 0)
            printf("\n");
    }
    printf("\n\n");

    getchar();
}

/*The result be shown as followed:

The result :
   1   7  14   0   9
   4  18   2   5  11
  15  16  13  12   6
  19   3   8  17  10

*/
