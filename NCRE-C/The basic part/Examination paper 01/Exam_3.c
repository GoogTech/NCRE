/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-19 21:46:09 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-27 18:26:45
 */

/*
 * （づ￣3￣）づ╭❤～ 
 * 
 * 编写函数'fun',该函数的功能：统计一行字符串中单词的个数.
 * 作为函数值返回,字符串在主函数中输入,规定所有单词由小写
 * 字母组成，单词之间有若干个空格隔开,第一行的开始没有空格.
 */

#include <string.h>
#include <stdio.h>
#define N 100
/*
 * Declare the method.
 */
static int fun(char *c);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char filename[] = "The basic part/Examination paper 01/Exam_3.dat";
    FILE *file_pointer;
    char line[N];
    int num = 0;

    printf("Please enter a string : \n");
    gets(line);

    num = fun(line);
    printf("The number of world is : %d", num);

    file_pointer = fopen(filename, "w");

    /**
     * todo : int fprintf (FILE* stream, const char*format, [argument]);
     */
    fprintf(file_pointer, "%d", fun("Hi The lanuage of C !"));
    fclose(file_pointer);

    getchar();
    return 0;
}

/**
 * todo : Initialize the method of fun.
 */
static int fun(char *c)
{
    int i, j = 0;
    for (i = 0; c[i] != '\0'; i++)
    {
        //? warning: suggest parentheses around '&&' within '||' .
        if ((c[i] != ' ') && (c[i + 1] == ' ' || c[i + 1] == '\0'))
        {
            j++;
        }
    }
    return j;
}
