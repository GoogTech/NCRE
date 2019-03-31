/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-09 10:52:20 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-09 11:36:05
 */

/*
 * ٩(๑>◡<๑)۶ 
 * 
 * 程序改错题
 * 
 * 函数'fun'的功能是 : 统计字符串中各元音字母(既A,E,I,O,U)的个数,注意 : 字母不区分大小写.
 * 例如:输入:THIs is a boot 则输出的是:1 0 2 2 0
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

/*
 * Declare the method.
 */
static void fun(char *string, int num[5]);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int num[5], i;
    char string[100];

    printf("PLEASE ENTER THE STRING : \n");
    gets(string);
    fun(string, num);
    for (i = 0; i < count; i++)
    {
        printf("%d", num[i]);
    }

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, int num[5])
{
    int i, N = 5;
    for (i = 0; i < N; i++)
    {
        num[i] = 0;
        for (; *string; string++)
        {
            i = -1;
            switch (string)
            {
            case 'a':
            case 'A':
                i = 0;
                break;
            case 'e':
            case 'E':
                i = 1;
                break;
            case 'i':
            case 'I':
                i = 2;
                break;
            case 'o':
            case 'O':
                i = 3;
                break;
            case 'u':
            case 'U':
                i = 4;
                break;
            }
            if (i > 0)
            {
                num[i]++;
            }
        }
    }
}