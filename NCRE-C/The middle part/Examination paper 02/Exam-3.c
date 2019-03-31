/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-01 16:33:05 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-01 17:07:24
 */

/*
 *  (っ•̀ω•́)っ✎⁾⁾
 * 
 * 程序设计题
 * 编写函数'fun',其功能是 : 将'string'所指字符串中除了下标和ASCII同时为奇数的字符外的其余所有字符全部删除.
 * 串中剩余字符所形成的一个新串放在'result'所指的数组中.
 * 
 * 例如 : 若字符串的内容为:'ABCDEFG12345',其中字符A的ASCII码值为奇数,但所在元素的小标为偶数,因
 * 此需要删除;而字符1的ASCII码值为奇数,所在数组中的下标也是奇数,因此不应当删除,其他依次类推.最后
 * 'result'所指数组中的内容应为 : '135'.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Declare the method.
 */
static void fun(char *string, char result[]);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[100], result[100];
    printf("PLEASE ENTER THE STRING : \n");
    scanf("%s", string);

    fun(string, result);
    printf("THE RESULT IS : %s\n", result);

    system("pause");
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 * ? ASCII : s[i] % 2
 */
static void fun(char *string, char result[])
{
    int i, j = 0, n;
    n = strlen(string);
    for (i = 0; i < n; i++)
    {
        if ((i % 2) && (string[i] % 2))
        {
            result[j++] = string[i];
        }
        result[j] = '\0';
    }
}