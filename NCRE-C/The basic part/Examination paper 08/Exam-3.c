/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 12:12:54 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 12:48:49
 */

/*
 * 程序设计题
 * 
 * 请编写函数'fun',其功能是: 实现矩阵的行列转置.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 3

/*
 * Declare the method.
 */
static void fun(int array[N][N]);
static void printArray(int array[N][N]);
static void saveArray(int array[N][N]);
//todo warning: implicit declaration of function 'access' [-Wimplicit-function-declaration].
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int array[N][N] = {{100, 200, 300}, {400, 500, 600}, {700, 800, 900}};
    //print the array.
    printf("THE ORIGINAL ARRAY : \n");
    printArray(array);
    //transposition.
    fun(array);
    //print the array agagin.
    printf("\nTHE RESULT AS FOLLOWED : \n");
    printArray(array);
    //store the result into the specified file.
    saveArray(array);

    getchar();
    return 0;
}

/**
 * TODO: DECLARE THE METHOD BY YOURSELF .
 */
static void fun(int array[N][N])
{
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++) //! Attention
        {
            temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
}

static void printArray(int array[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
}
static void saveArray(int array[N][N])
{
    FILE *file_pointer;
    char file_name[] = "Exam-3.dat";

    /**
     * TODO : STORE THE RESULT INTO THE SPECIFIED FILE.
     * ? : #Include <io.h>
     * ? : int access(const char *filename, int mode); 
     * ? : Determine whether the path of file or directory is exist.
     */
    if (access(file_name, 0) == 0)
        printf("\n[ SUCCESS : The path of file is exist ! ]");
    else
        printf("\n[ ERROR : The path of directory is not exist ! ]");

    if ((file_pointer = fopen(file_name, "w")) != NULL)
        printf("\n[ Success to open the file ! ]\n");
    else
        printf("\n[ ERROR : Fail to open the file ! ]\n");

    file_pointer = fopen(file_name, "w");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            fprintf(file_pointer, "%d ", array[i][j]);
        }
        fprintf(file_pointer, "\n");
    }
    fclose(file_pointer);
}
