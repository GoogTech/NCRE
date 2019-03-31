/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-18 12:18:35 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-18 12:38:58
 */

/*
 * 程序修改题
 * 
 * 函数'fun'的功能是: 依次取出字符串中所有的数字字符,形成新的字符串.并取代原字符串.
 */

#include <stdlib.h>
#include <stdio.h>
#define N 80

/*
 * Declare the method.
 */
static void fun(char *string);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[N];
    printf("PLEASE ENTER THE STRING : ");
    gets(string);
    printf("\nTHE STRING IS : %s\n", string);
    fun(string);
    printf("\nTHE STRING AFTER CHANGING : %s\n", string);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string)
{
    int i, j;
    for (i = 0, j = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9')
        {
            string[j++] = string[i]; //! MODIFY
        }
    }
    string[j] = '\0'; //! MODIFY
}