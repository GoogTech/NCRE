/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-17 17:32:30 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-17 17:50:17
 */

/*
 * 程序修改题
 * 
 * 函数'fun'的功能是 : 将'string'字符串中的字母转换为按字母序列的后续字母(如"Z"->"A","z"->"a").其它字符不变.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 20

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
    printf("PLEASE INPUT THE STRING WITH LENGTH LESS THAN : EIGHTY) : ");
    gets(string);
    printf("\nTHE STRING INPUTED BY YOU : ");
    puts(string);
    printf("\nTHE STRING AFTER CONVERTING : ");
    fun(string);
    puts(string);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string)
{
    while (*string != '\0') //! MODIFY
    {
        if ((*string >= 'A' && *string <= 'Z') || (*string >= 'a' && *string <= 'z'))
        {
            if (*string == 'Z')
            {
                *string = 'A';
            }
            else if (*string == 'z')
            {
                *string = 'a';
            }
            else
            {
                *string += 1;
            }
        }
        //! ATTENTION : MODIFY
        string++;
    }
}
