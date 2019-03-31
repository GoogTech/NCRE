/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 14:05:46 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 14:19:04
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:删除'b'所指数组中小于'10'的数据.主函数中输出删除后数组中余下的数据.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 20

int fun(int *b)
{
    /**********found**********/
    int t[N], i, num = 0;
    for (i = 0; i < N; i++)
        if (b[i] >= 10)
            /**********found**********/
            t[num++] = b[i];
    /**********found**********/
    for (i = 0; i < num; i++)
        b[i] = t[i];

    return (num);
}

void main()
{
    int a[N], i, num;
    printf("a数组中的数据 :\n");
    for (i = 0; i < N; i++)
    {
        a[i] = rand() % 21;
        printf("%4d", a[i]);
    }
    printf("\n");

    num = fun(a);

    printf("大于等于10的元素如下: \n");
    for (i = 0; i < num; i++)
        printf("%4d", a[i]);

    printf("\n");
    system("pause");
}

/*The result be shown as followed:

a数组中的数据 :
  20   8  13  19  17  16  12   0  19  20  14   5  13   6   7   8  13  14  18  18
大于等于10的元素如下:
  20  13  19  17  16  12  19  20  14  13  13  14  18  18
Press any key to continue . . .

*/