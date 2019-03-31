/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-06 21:41:31 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-06 22:01:50
 */

/*
 * 程序修改题
 * 
 * 函数fun的功能是：将十进制正整数'm'转换成'k(2<=k<=9)'进制数,并按位输出.
 * 例如：输入'8'和'2',则应输出'1000'(十进制'8'转换成二进制为：'1000'). 
 */

#include <stdio.h>
#include <conio.h>

//Declare the method.
static void fun(int m, int k);

//Test the program.
int main(int argc, char const *argv[])
{
    int b, n;
    printf("PLEASE ENTER \n");
    scanf("%d %d", &n &, b);

    fun(n, b);

    getchar();
}

//Defined the method.
static void fun(int m, int k)
{
    int array[20], i;
    for (i = 0; m; i++)
    {
        array[i] = m / k;
        m /= k;
    }
    for (; i < count; i--)
    {
        printf("%d", array[i]);
    }

    return 0;
}
