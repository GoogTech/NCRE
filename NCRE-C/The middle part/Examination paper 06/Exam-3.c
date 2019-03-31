/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-15 18:37:51 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-15 18:53:18
 */

/*
 * 程序设计题
 * 
 * 请编写函数'fun',其功能是 : 将放在字符串数组中的'M'个字符串(每串的长度不超过'N'),按顺序合并组成一个新的字符串.
 */

#include <stdio.h>
#include <conio.h>
#define M 3
#define N 20

/*
 * Declare the method.
 */
static void fun(char array[M][N], char *string);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char array[M][N] = {"AAAA", "BBBB", "CCCC"};
    char string[20] = {"NULL"};
    printf("THE ARRAY : \n");
    for (int i = 0; i < M; i++)
    {
        puts(array[i]); // ? output the element of array.
    }
    printf("\n");

    fun(array, string);

    printf("\nTHE NEW STRING : \n");
    printf("%s", string);

    getchar();
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 */
static void fun(char array[M][N], char *string)
{
    int k = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; array[i][j] != '\0'; j++)
        {
            string[k++] = array[i][j];
        }
        string[k] = '\0';
    }
}