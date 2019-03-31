/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-18 17:51:37 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-18 19:05:24
 */

/*
 * ★程序填空题
 * 
 * 函数'fun'的功能是 : 在形参'string'所指字符中寻找与参数'c'相同的字符,并在其后插入一个与之相同的字符.
 * 若找不到相同的字符则不做任何处理.
 */

#include <stdlib.h>
#include <stdio.h>
#define N 20

/*
 * Declare the method.
 */
static void fun(char *string, char *c);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[N], c;
    printf("PLEASE ENTER THE STRING : ");
    gets(string);
    printf("\nPLEASE ENTER THE C : ");
    scanf("%c", &c);

    fun(string, c);
    printf("\nTHE RESULT IS : %s\n", string);

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, char *c)
{
    int i, j, n;
    for (i = 0; string[i] != '\0'; i++) //! blank
    {
        if (string[i] == c)
        {
            n = 0; //! blank
            //break; //? optimization algorithm.
            while (string[i + 1 + n] != '\0')
            {
                n++; //? the length of the string.
            }
            for (j = i + 1 + n; j > i; j--)
            {
                string[j + 1] = string[j];
            }
            string[j + 1] = c; //! blank
            i += 1;
        }
    }
}
