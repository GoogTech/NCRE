/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-07 15:24:43 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-07 16:00:47
 */

/*
 * ٩(๑>◡<๑)۶ 
 * 
 * 程序修改题
 * 
 * 假定整数数列中的数不重复,并存放在数组汇中.下列给定程序中函数'fun'的功能是 : 删除数列中值为'x'的
 * 元素,变量'count'中存放数列中元素的个数.
 */
#include <stdio.h>
#include <stdlib.h>
#define N 20

/*
 * Declare the method.
 */
static int fun(int *array, int count, int x);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int array[N] = {-3, 0, 1, 5, 7, 99, 10, 15, 30, 90}, x, count = 10, i;

    printf("THE ORIGINAL DATA : \n");
    for (i = 0; i < count; i++)
    {
        printf("%5d", array[i]);
    }
    printf("\nINPUT X TO DELETE : ");
    scanf("%d", &x);
    printf("\nDELETE : %d\n", x);

    count = fun(array, count, x);
    if (count == -1)
    {
        printf("[ NOT FOUND THE X WITCH YOU INPUTED ! ]\n");
    }
    else
    {
        printf("\nTHE DATA AFTER DELETED : \n");
        for (i = 0; i < count; i++)
        {
            printf("%5d", array[i]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static int fun(int *array, int count, int x)
{
    int p = 0, i;
    array[count] = x; //? MODIFY
    while (x != array[p])
    {
        p += 1;
    }
    if (p == count)
    {
        return -1;
    }
    else
    {
        for (i = p; i < count; i++)
        {
            array[i] = array[i + 1]; //! MODIFY
        }
        return count - 1;
    }
}