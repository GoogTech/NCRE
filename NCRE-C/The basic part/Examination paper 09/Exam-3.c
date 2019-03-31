/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-26 15:09:33 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 16:26:04
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

/*
 * 程序设计题
 * 
 * 请编写函数'fun(int limit,int array[MAX])',其的功能是: 求出小于或等于 'limit'的所有素数并存放在'array'数组中,并返回所求出的素数个数.
 * 首先你需要了解什么事什么素数.好尴尬 ~
 */

/*
 * Declare the method
 */
static int fun(int limit, int array[MAX]);
static void saveResult(int limit, int array[MAX]);
//warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]..
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int sum, limit, array[MAX];
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%d", &limit);

    //output the result.
    sum = fun(limit, array);
    for (int i = 0; i < sum; i++)
    {
        if (i % 10 == 0 && i != 0)
        {
            printf("\n");
        }
        printf("%5d", array[i]);
    }

    //save the result.
    saveResult(limit, array);

    printf("\n");
    system("pause");

    return 0;
}

/**
 * TODO : DEFINED THE MOETHOD BY YOURSELF.
 */
static int fun(int limit, int array[MAX])
{
    int i, j, k = 0;
    for (i = 2; i < limit; i++) //注意呦：素数的最小值是2.
    {
        for (j = 2; j < i; j++) //判断是否为素数.
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j >= i) //存储素数.
        {
            array[k++] = i;
        }
    }
    return k;
}

//TODO : STORE THE RESULT INTO THE SPECIFIED FILE.
static void saveResult(int limit, int array[MAX])
{
    int i, sum;
    FILE *file_pointer;
    char file_name[] = "Exam-3.dat";

    /**
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

    sum = fun(limit, array);
    for (i = 0; i < sum; i++)
    {
        if (i % 10 == 0 && i != 0)
        {
            fprintf(file_pointer, "\n");
        }
        fprintf(file_pointer, "%5d", array[i]);
    }

    fclose(file_pointer);
}

/*

PLEASE ENTER A NUMBER : 100
    2    3    5    7   11   13   17   19   23   29
   31   37   41   43   47   53   59   61   67   71
   73   79   83   89   97
[ SUCCESS : The path of file is exist ! ]
[ Success to open the file ! ]

 */