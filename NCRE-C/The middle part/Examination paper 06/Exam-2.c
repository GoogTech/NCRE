/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-15 17:57:57 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-16 19:28:28
 */

/*
 * ★★★程序修改题
 * 
 * 函数'fun'的功能是 : 计算'string_A'所指字符串中含有'string_B'所指字符串的数目,并作为函数值返回.
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define N 80

/*
 * Declare the method.
 */
static int fun(char *string_A, char *string_B);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string_A[N], string_B[N];
    int result;

    printf("PLEASE ENTER THE STRING_A : ");
    gets(string_A);
    printf("PLEASE ENTER STRING_B : ");
    gets(string_B);

    result = fun(string_A, string_B);
    printf("THE RESULT IS : %d", result);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static int fun(char *string_A, char *string_B)
{
    int result = 0;
    char *A, *B;

    B = string_B; //! MODIFY

    while (*string_A)
    {
        A = string_A;
        while (*B)
        {
            if (*B == *A)
            {
                A++;
                B++;
            }
            else
            {
                break;
            }
            if (*B == '\0')
            {
                result++;
            }

            B = string_B; //! MODIFY
            string_B ++;
        }
    }
    return result;
}