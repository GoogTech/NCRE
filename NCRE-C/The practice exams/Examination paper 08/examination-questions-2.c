/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 19:11:42 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 19:17:55
 */

/*
 * 函数'fun'的功能是:将主函数中两个变量的值进行交换,例如:若变量'a'中的值为'8','b'中的值为'3',则程序运行后,'a'中的值为'3','b'中的值为'8'.
 */

#include <stdio.h>
/*************found**************/
void fun(int *x, int *y)
{
    int t;
    /*************found**************/
    t = *x;
    *x = *y;
    *y = t;
}
void main()
{
    int a, b;
    a = 8;
    b = 3;
    printf("before: a=%d and b=%d\n", a, b);
    fun(&a, &b);
    printf("after: a=%d and b=%d\n", a, b);

    getchar();
}

/*The result be shown as followed:

before: a=8 and b=3
after: a=3 and b=8

*/