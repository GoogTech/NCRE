/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-18 19:05:27 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-18 19:22:32
 */

/*
 * 程序修改题
 * 
 * 在此程序中的主函数中,从键盘输入若干个数放入数组中,用'0'结束输入并放在最后一个元素中.
 * 函数'fun'的功能是 : 计算数组元素中所有值为正数的平均值(不包括'0').
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static double fun(int array[]);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int array[5];
    int i = 0;
    printf("PLEASE ENTER FIVE DATA : \n");
    do
    {
        scanf("%d ", &array[i]);
    } while (array[i++] != 0);
    printf("\nTHE AVERAGE IS : %lf\n", fun(array));

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static double fun(int array[])
{
    double sum = 0.0; //! MODIFY
    int c = 0, i = 0;
    while (array[i] != 0)
    {
        if (array[i] > 0)
        {
            sum += array[i];
            c++;
        }
        i++;
    }
    return sum / c; //! MODIFY
}