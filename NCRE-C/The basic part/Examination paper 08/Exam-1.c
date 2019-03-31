/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 08:02:44 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 08:52:45
 */

/*
 * 程序填空题
 * 
 * 在此程序中,函数'fun'的功能是：调用随机函数产生20个互补相同的整数放在形参'array'所指的数组中(此数组在主函数中已经被置为0).
 */

#include <stdio.h>
#include <stdlib.h>
#define N 20

/*
 * Declare the method.
 */
static void fun(int *array);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int array[N] = {0}, i;
    fun(array);
    printf("THE ARRAY BE SHOWD AS FOLLOWED : \n");
    for (i = 0; i < N; i++)
    {
        printf("%4d", array[i]);
        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    getchar();
    return 0;
}

/*
 * ★Defined the method.
 */
static void fun(int *array)
{
    int i, element, n = 0;
    element = rand() % 20;
    while (n < N) //! blank
    {
        //todo: determines if the array is the same element.
        for (i = 0; i < n; i++) //! Attention: i<n
        {
            if (element == array[i])
            {
                break; //! blank
            }
        }
        //todo: store the element into the array.
        if (i == n) //! blank
        {
            array[n] = element;
            n++;
        }
        element = rand() % 20;
    }
}
