/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-31 11:24:03 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-31 20:49:53
 */

/*
 *  (～￣▽￣)～ 
 * 
 * 程序设计题
 * 定义一个'N x N'的二维数组.并在主函数中赋值.请编写函数'fun'.函数的功能是：求出数组周边元素的平均值并作为函数返回给主函数中的's'
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5

/*
 * Declare the function.
 */
static double fun(int array[][N]);
//TODO : warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    FILE *file_pointer;

    int i, j;
    double average;
    char file_name[] = "NCRE-C/The basic part/Examination paper 04/Exam-3.dat";
    int array[N][N] = {{0, 1, 2, 7, 9}, {1, 9, 7, 4, 5}, {2, 3, 8, 3, 1}, {4, 5, 6, 8, 2}, {5, 9, 1, 4, 1}};

    printf("\n------ The array ------\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }

    average = fun(array);
    printf("\n------ The average ------\n");
    printf("%lf\n", average);

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

    fprintf(file_pointer, "%lf", average);
    fclose(file_pointer);
    system("pause");
    return 0;
}

/**
 * TODO : Get the average.
 * !Attention : Defined the method by yourself.
 */
static double fun(int array[][N])
{
    int i, j, count = 0;
    double sum = 0.0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i == 0 || j == N - 1 || j == 0 || i == N - 1) //TODO :Get the Peripheral element.
            {
                sum = sum + array[i][j];
                count++;
            }
        }
    }
    return sum / count;
}
