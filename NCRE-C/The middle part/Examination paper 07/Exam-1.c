/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-16 13:27:25 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-16 20:21:11
 */

/*
 * 程序填空题
 * 
 * 函数'fun'的功能是: 将形参'string'所指字符串下标为奇数的字符按ASCII码大小递增排序,并将排序后
 * 下标为奇数的字符串取出.存入形参'p'所指字符数组中.形成一个新串.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static void fun(char *string, char *p);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[20], p[20];
    printf("PLEASE ENTER THE STRING : ");
    scanf(string);

    printf("\nTHE STRING INPUTED BY YOU : %s", string);
    fun(string, p);

    printf("\nTHE RESULT : %s", p);

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, char *p)
{
    int i, j, x, temp, n = 0;

    //todo : Get the length of the string.
    for (i = 0; string[i] != '\0'; i++)
    {
        n++;
    }
    //todo : Control the odd number.
    for (i = 1; i < n - 2; i += 2)
    {
        temp = i; //! blank
        //todo : comparing.
        for (j = i + 2; j < n; j += 2) //! blank
        {
            if (string[temp] > string[j])
            {
                temp = j;
            }
        }
        if (temp != i)
        {
            x = string[i];
            string[i] = string[temp];
            string[temp] = x;
        }
    }

    //todo : Store the new string.
    for (i = 0; i < n; i += 2, j++)
    {
        p[j] = string[i];
    }
    p[j] = '\0'; //! blank
}
