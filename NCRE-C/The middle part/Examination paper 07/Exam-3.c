/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-16 20:04:40 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-16 20:20:14
 */

/*
 * 程序设计题
 * 
 * 编写函数'fun',其功能是: 删除一个字符串中指定下标的字符.其中'a'指向原字符串.
 * 删除指定字符串后的字符串存放在'b'所指的数组中.'n'中存放指定的下标.
 */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define LENGTH 20

/*
 * Declare the method.
 */
static void fun(char *a, char *b, int n);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int n;
    char string_a[LENGTH], string_b[LENGTH];

    printf("PLEASE ENTER THE STRING : ");
    gets(string_a);
    printf("\nPLEASE ENTER THE POSITION OF THE STRING WHICH YOU WANT TO DELETE : ");
    scanf("%d", &n);

    fun(string_a, string_b, n);
    printf("\nTHE STRING BE SHOWED AFTER DELETING : %s \n", string_b);

    system("pause");
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 */
static void fun(char *a, char *b, int n)
{
    int i, k = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if (i != n)
        {
            b[k++] = a[i];
        }
        b[k] = '\0';
    }
}
