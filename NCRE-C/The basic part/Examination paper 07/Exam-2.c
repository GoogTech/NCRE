/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-25 18:31:26 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-25 18:46:18
 */

/*
 * 程序修改题
 * 
 * 函数'fun'功能是 : 分别统计字符串中大写字母和小写字母的个数.
 */

#include <stdio.h>

/*
 * Declare the method.
 */
static void fun(char *stirng, int *upper, int *lower); //! MODIFY

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[20];
    int upper = 0, lower = 0;
    printf("PLEASE ENTE THE STRING : ");
    gets(string);

    fun(string, &upper, &lower); //! ATTENTION
    printf("\nTHE UPPER = %d AND LOWER = %d", upper, lower);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, int *upper, int *lower) //! MODIFY
{
    while (*string)
    {
        if (*string >= 'A' && *string <= 'Z')
        {
            *upper += 1; //! ATTENTION
        }
        if (*string >= 'a' && *string <= 'z')
        {
            *lower += 1;
        }
        string++;
    }
}
