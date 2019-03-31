/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-02 11:25:40 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-02 11:48:25
 */

/*
 *  (ノ◕ω◕)ノ
 * 
 * 程序填空题
 * 函数'fun'的功能是 : 在形参'string'所指字符串中的每个数字字符之后插入一个'*'号.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static void fun(char *string);

/*
 * Test the program. 
 */
int main(int argc, char const *argv[])
{
    char string[60] = "Test1the23program";
    printf("THE ORIGINAL STRING : %s\n", string);

    fun(string);
    printf("THE RESULT : %s\n", string);

    getchar();
    return 0;
}

/*
 * Defined the mthod.
 */
static void fun(char *string)
{
    int i, j, n;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= '0' && string[i] <= '9') //! Blank
        {
            n = 0;
            while (string[i + 1 + n] != '\0') //! Blank
            {
                n++;
            }
            for (j = i + n + 1; j > i; j--)
            {
                string[j + 1] = string[j]; //! Blank
            }
            string[j + 1] = '*';
            i = i + 1;
        }
    }
}