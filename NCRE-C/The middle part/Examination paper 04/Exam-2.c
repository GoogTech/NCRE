/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-06 15:51:24 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-06 16:05:49
 */

/*
 *  (๑*◡*๑)
 * 
 * 程序修改题
 * 
 * 函数'fun'的功能是 : 将'string'所指字符串依次放入't'所指数组中.例如 : 字符串为:'AABBCCDDEEFF',则输出应为:'ABBCCDDEFF'
 */
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#define N 80

/*
 * Declare the method.
 */
static void fun(char *string, char t[]);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[N], t[N];

    printf("PLEASE ENTER STRING : \n");
    gets(string);
    fun(string, t);

    printf("\nTHE RESULT IS : %s\n", t);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, char t[])
{
    int i, j = 0;
    for (i = 0; i < (int)strlen(string); i++)
    {
        if ((i % 2 != 0) || (string[i] % 2 == 0))
        {
            t[j++] = string[i];
        }
        t[j] = '\0';
    }
}