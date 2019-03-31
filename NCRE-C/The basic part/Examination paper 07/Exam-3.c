/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-25 18:46:36 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-26 12:32:18
 */

/*
 * ★★程序设计题
 * 
 * 请编写一个函数'float fun(double h)',其功能 : 使变量'h'中的值保留两位小数,并对第三位进行四舍五入(规定'h'中的值为正数). 
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static float fun(float h);
//todo : warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    FILE *file_pointer;
    char file_name[] = "E:/GitHub/Workbench-VSCode+GitHub/C/NCRE-C/The basic part/Examination paper 07/Exam-3.dat";
    float f;
    printf("PLEASE ENTER A NUMBER : ");
    scanf("%f", &f);

    //注意：％f用来输出实数,以小数形式输出,默认情况下保留小数点6位.
    printf("\nTHE ORIGINAL NUMBER IS : %f\n", f);
    printf("\nTHE RESULT IS : %f\n", fun(f));

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
    fprintf(file_pointer, "%f", fun(f));
    fclose(file_pointer);

    system("pause");
    return 0;
}

/**
 * TODO: ★DEFINED THE METHOD BY YOURSELF.
 */
static float fun(float h)
{
    //!注意: 转换为整型时并不进行四舍五入.
    int temp = (int)(h * 1000 + 5) / 10;

    //! Attention: 100.0
    return (float)temp / 100.0;
}