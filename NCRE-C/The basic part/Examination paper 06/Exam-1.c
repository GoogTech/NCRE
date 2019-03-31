/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-09 18:06:41 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-09 18:38:56
 */

/*
 *  ヾ(●´∀｀●) 
 * 
 * 程序填空题
 * 
 * 函数'fun'的功能是 : 将'string_a'和'string_b'所指的两个字符串分别转换成面值相同的整数,并进行相加作为函数值返回.
 * 规定字符串中只含九个以下的数字字符.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h> //? int isdigit();
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
        printf("PLEASE INPUT STRING-A : ");
        gets(string_a);
    } while (strlen(string_a) > N); // ?

    do
    {
        printf("\nPLEASE INPUT STRING-B : ");
        gets(string_b);
    } while (strlen(string_b) > N);

    printf("THE RESULT IS : %ld");
    fun(string_a, string_b);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static long ctod(char *string)
{
    long d = 0;

    /**
     * ? : isdigit() : Included the header file of '<ctype.h>'.
     * todo : Checks whether the argument is a decimal numeric character.
     */
    if (isdigit(*string))
    {
        /**
         * ! blank
         * ? Converts a string to an integer.
         */
        d = d * 10 + *string - '0';

        //! blank
        string++;
    }

    return d;
}

static long fun(char *string_a, char *string_b)
{
    return ctod(string_a) + ctod(string_b); //! blank
}