/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-09 18:55:21 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-09 18:58:21
 */

/*
 *  ヾ(●´∀｀●) 
 * 
 * 程序设计题
 * 
 * 请编写一个函数'float fun(double number)',该函数的功能是 : 使变量'number'中的值保留两位小数,并对第三位进行四舍五入(规定'h'中的值为正数).
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static float fun(float number);
//todo : warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char file_name[] = "The basic part/Examination paper 06/Exam-3.dat";
    FILE *file_pointer;
    float number;
    printf("PLEASE ENTER THE NUMBER : ");
    scanf("%f", &number);

    printf("\nTHE RESULT : %f", fun(number));

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
    fprintf(file_pointer, "%f", fun(number));
    fclose(file_pointer);

    system("pause");
    return 0;
}

/**
 * TODO : Defined the method by yourself.
 */
static float fun(float number)
{
    int temp = (int)(number * 1000 + 5) / 10;
    return (float)temp / 100.0;
}
