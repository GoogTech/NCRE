/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-09 18:39:41 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-09 18:53:43
 */

/*
 *  ヾ(●´∀｀●) 
 * 
 * 程序修改题
 * 
 * 函数'fun'的功能是 : 分别统计字符串中大写字母和小写字母的个数.
 */

#include <stdio.h>

/*
 * Declare the method.
 */
static void fun(char *string, int *a, int *b);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[100];
    int upper = 0, lower = 0;
    printf("PLEASE ENTER A STRING : ");
    gets(string);

    fun(string, &upper, &lower); //! ATTENTION

    printf("\nUPPER = %d AND LOWER = %d", upper, lower);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, int *a, int *b) //! MODIFY
{
    while (*string)
    {
        if (*string >= 'A' && *string <= 'Z')
        {
            *a = *a + 1; //!MODIFY
        }
        if (*string >= 'a' && *string <= 'z')
        {
            *b = *b + 1;
        }
        string++;
    }
}