/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-18 12:40:17 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-18 13:07:30
 */

/*
 * ★程序设计题
 * 
 * 请编写函数'fun',其功能是 : 将M行N列的二维数组的字符数据,按列的顺序依次放到一个字符串中.
 */

#include <stdio.h>
#define M 3w
#define N 4

/*
 * Declare the method.
 */
static void fun(char (*array)[N], char *string); //!Attention : char (*array)[N] : 表示的是指向一个元素为N的字符串数组的指针.

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i, j;
    char string[100], array[M][N] = {{'W', 'W', 'W', 'W'}, {'S', 'S', 'S', 'S'}, {'H', 'H', 'H', 'H'}};
    printf("THE MATRIX BE SHOWED AS FOLLOWED : \n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%3c", array[i][j]);
        }
        printf("\n");
    }

    fun(array, string);
    printf("THE STRING BE SHOWED AS FOLLOWED : \n");
    puts(string);

    getchar();
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 */
static void fun(char (*array)[N], char *string)
{
    int i, j, k = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            string[k++] = array[j][i];
        }
    }
    string[k] = '\0';
}
