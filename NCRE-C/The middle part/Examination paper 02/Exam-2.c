/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-01 15:48:37 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-01 16:32:54
 */

/*
 *  (っ•̀ω•́)っ✎⁾⁾
 * 
 * 程序修改题
 * 函数'fun'的功能是 : 将's'所指字符串的正序和反序进行连接,形成的新串放在'result'所指的数组中.
 * 例如 : 当'string'所指字符串为'ABCD'时,'t'所指字符串中的内容应为: 'ABCDDCBA'.
 */
#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the mthod.
 */
static void fun(char *string, char *result);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[100], result[100];
    printf("PLEASE ENTER THE STRING S :\n");
    scanf("%s", string);

    fun(string, result);
    printf("\nTHE RESULT IS : %s\n", result);

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, char *result)
{
    int i, length;
    length = strlen(string); //error
    for (i = 0; i < length; i++)
    {
        result[i] = string[i];
    }
    for (i = 0; i < length; i++)
    {
        result[length + i] = string[length - 1 - i];
    }
    //todo : or result[2 * d] = '\0'
    result[length + i] = '\0';
}