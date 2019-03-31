/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 13:13:58 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 13:24:36
 */

/*
 * ★★程序修改题
 * 
 * 函数'fun'的功能是: 将主函数中两个变量的值进行交换.
 */

#include <stdio.h>

//Declare the method.
static void fun(int *a, int *b);

//Test the progarm.
int main(int argc, char const *argv[])
{
    int a = 1, b = 2;
    printf("BEFORE : A = %d and B = %d", a, b);
    fun(&a, &b);
    printf("\nAFTER : A = %d and B = %d", a, b);

    getchar();
    return 0;
}
//Defined the method.
static void fun(int *a, int *b) //! MODIFY
{
    int temp;
    temp = *a; //! MODIFY
    *a = *b;
    *b = temp;
}
