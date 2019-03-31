/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-18 11:23:43 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-18 12:16:06
 */

/*
 * ★★★程序填空题
 * 
 * 函数'fun'的功能是: 将形参给定的字符串,整数,浮点数写到文本文件中,再用字符方式从此文本文件中逐个读入并显示在终端屏幕上.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static void fun(char *string, int n, double f);
//warning: implicit declaration of function 'access' [-Wimplicit-function-declaration]
int access();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char string[10] = "Hello!";
    int n = 521;
    double f = 100.00;
    fun(string, n, f);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *string, int n, double f)
{
    FILE *file_pointer; // ! blank
    char ch, file_name[] = "E:/GitHub/Workbench-VSCode+GitHub/C/NCRE-C/The middle part/Examination paper 09/Exam-1.dat";

    /**
     * todo : write the string into the specified file.
     * ? : #Include <io.h>
     * ? : int access(const char *filename, int mode); 
     * ? : Determine whether the path of file or directory is exist.
     */
    if (access(file_name, 0) == 0)
        printf("[ The path of file is exist ! ]");
    else
        printf("\nError : The path of directory is not exist !");

    if ((file_pointer = fopen(file_name, "w")) != NULL)
        printf("\n[ Write : Success to open the file ! ]");
    else
        printf("\nError : Fail to open the file !");

    fprintf(file_pointer, "%s %d %f", string, n, f);
    fclose(file_pointer);

    //todo : read the string from the specified file.
    if ((file_pointer = fopen(file_name, "r")) != NULL)
        printf("\n[ Read : Success to open the file ! ]\n");

    printf("\nTHE STRING : ");
    ch = fgetc(file_pointer);
    //? feof() : 是检测流上的文件结束符的函数,如果文件结束,则返回非0值,否则返回0.
    while (!feof(file_pointer)) //! blank
    {
        putchar(ch); //! blank
        ch = fgetc(file_pointer);
        //putchar('\n');
    }
    fclose(file_pointer);
}
