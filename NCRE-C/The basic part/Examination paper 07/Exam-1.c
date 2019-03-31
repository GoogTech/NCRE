/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-25 17:59:31 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-25 18:30:47
 */

/*
 * 程序填空题
 * 
 * 在此程序中,函数'fun'的功能是：将'string_a'和'string_b'的所指的两个字符串分别转换为面值相同的整数,并进行相加操作后作为函数值返回.
 * 且规定：字符串中只含有小于'9'的字符.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //?
#include <string.h>
#define N 9

/*
 * Declare the method.
 */
static long ctod(char *string);
static long fun(char *string_a, char *string_b);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string_a[N], string_b[N];
    do
    {
        printf("PLEASE ENTER THE STRING_A : ");
        gets(string_a);
    } while (strlen(string_a) > N);
    do
    {
        printf("\nPLEASE ENTER THE STRING_B : ");
        gets(string_b);
    } while (strlen(string_b) > N);

    printf("\nTHE RESULT IS : %ld", fun(string_a, string_b));

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static long ctod(char *string)
{
    long result = 0;
    while (*string)
    {
        if (isdigit(*string))
        {
            //TODO: 把字符串分别转换为面值相等的整数.
            result = result * 10 + *string - '0'; //! blank
            string++;                             //! blank
        }
    }
    return result;
}
static long fun(char *string_a, char *string_b)
{
    return ctod(string_a) + ctod(string_b); //! blank
}
