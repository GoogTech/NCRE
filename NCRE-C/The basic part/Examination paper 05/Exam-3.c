/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-09 09:20:12 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-09 10:51:47
 */

/*
 * ٩(๑>◡<๑)۶ 
 * 
 * 程序设计题
 * 
 * 请编写函数'fun',该函数的功能是 : 求出二维数组周边的元素之和,作为函数值返回.二维数组中的值在主函数中赋予.
 */

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5

/*
 * Declare the method.
 */
static int fun(int a[M][N]);
//todo : warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    FILE *file_pointer;
    char file_name[] = "NCRE-C/The basic part/Examination paper 05/Exam-3.dat";
    int array[M][N] = {{1, 3, 5, 7, 9},
                       {2, 9, 9, 9, 4},
                       {6, 9, 9, 9, 8},
                       {1, 3, 5, 7, 0}};

    int i, j;
    printf("THE ORIGINAL DATA IS :\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%6d", array[i][j]);
        }
        printf("\n");
    }

    //todo : Get the average of surrounding elements.
    printf("\nTHE AVERAGE IS : ");
    fun(array);

    /**
     * TODO : STORE THE AVERAGE INTO THE SPECIFIED FILE.
     * ? : #Include <io.h>
     * ? : int access(const char *filename, int mode); 
     * ? : Determine whether the path of file or directory is exist.
     */
    if (access(file_name, 0) == 0)
        printf("\n[ SUCCESS : The path of file is exist ! ]");
    else
        printf("\n[ ERROR : The path of directory is not exist ! ]");

    if ((file_pointer = fopen(file_name, "w")) != NULL)
        printf("\n[ SUCCESS to open the file ! ]\n");
    else
        printf("\n[ ERROR : Fail to open the file ! ]\n");

    file_pointer = fopen(file_name, "w");
    fprintf(file_pointer, "%d", fun(array));
    fclose(file_pointer);

    getchar();
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 */
static int fun(int array[M][N])
{
    int i, j, sum = 0;
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || i == M - 1 || j == 0 || j == N - 1)
            {
                sum += array[i][j];
                printf("%d", array[i][j]);

                if (array[i][j] != 0)
                {
                    printf("+");
                }
            }
        }
    }
    printf(" = %d\n", sum);
    return sum;
}
