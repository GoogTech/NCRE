/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-27 16:30:24 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-31 11:51:55
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序设计题
 * 定义'N x N'的二维数组,并在主函数中自动赋值.
 * 请编写函数'fun(int a[][N],int m)',该函数的功能是使数组右上半三角中的值乘以'm'.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#define N 6

/*
 * Declare the variable.
 */
int a[N][N], m, i, j;
FILE *file_pointer;
char file_name[] = "NCRE-C/The basic part/Examination paper 03/Exam-3.dat";

/*
 * Declare the method.
 */
static void fun(int a[][N], int m);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    //Create the array and output them.
    printf("The element of array : \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = rand() % 20;
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    //Initialize the value of 'm'.
    m = rand() % 4;
    printf("\nm = %4d\n", m);

    //Outputs the calculated elements of the array.
    fun(a, m);
    printf("\nThe result as element of array : \n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    //Initialize the echo element of array.
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = i * j;
        }
    }
    fun(a, 8);

    /**
     * ? : #Include <io.h>
     * ? : int access(const char *filename, int mode); 
     * ? : Determine whether the path of file or directory is exist.
     */
    if (access(file_name, 0) == 0)
        printf("\n[ The path of file is exist ! ]");
    else
        printf("\nError : The path of directory is not exist !");

    if ((file_pointer= fopen(file_name, "w")) != NULL)
        printf("\n[ Success to open the file ! ]");
    else
        printf("\nError : Fail to open the file !");

    //Store the result into the specified file.
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            //? int fprintf (FILE* stream, const char*format, [argument]);
            fprintf(file_pointer, "%4d", a[i][j]);
        }
        fprintf(file_pointer, "\n");
    }
    fclose(file_pointer);

    printf("\n");
    system("pause");
    return 0;
}

/**
 * todo : Defined the method of 'fun'.
 * !Algorithm : Independent programming.
 */
static void fun(int a[][N], int m)
{
    int i, j;
    for (j = 0; j < N; j++)
    {
        for (i = 0; i <= j; i++)
        {
            a[i][j] = a[i][j] * m;
        }
    }
}
