/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-25 16:53:18 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-25 17:50:08
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序设计题
 * 已知学生记录由学号和学习成绩构成,'N'名学生的数据已存入'a'结构体数组中.
 * 请编写函数'fun',该函数的功能是：找到成绩最低的学生记录.通过形参返回主
 * 函数（规定只能有一个最低分）.
 */

/*
 * Include the header file.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#define N 4

/*
 * Defined the struct.
 */
typedef struct student
{
    char id[10];
    int score;
} STUDENT;

/*
 * Declare the method.
 */
static void fun(STUDENT stu[], STUDENT *s);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    FILE *file_porter;
    //? m :
    STUDENT data[N] = {{"STUDENT-A", 60}, {"STUDENT_B", 59}, {"STUDENT-C", 100}, {"STUDENT-D", 66}}, m;

    int i;
    system("CLS");
    printf("----- The all original data of student -----\n");
    for (i = 0; i < N; i++)
    {
        printf("ID = %s Mark = %d\n", data[i].id, data[i].score);
    }

    //? Get the position of student which the score is minimum.
    fun(data, &m);
    printf("\n----- The data of student in the minimum score -----\n");
    //Output the result.
    printf("%s,%d\n", m.id, m.score);
    
    /**
     * ! Open the file. what's the use ?
     */
    file_porter = fopen("Exam_1.dat", "wb");
    /**
     * todo : Print the specified data into the file.
     * ? : fprintf(file-porter , "" , );
     */
    fprintf(file_porter, "%s,%d", m.id, m.score);
    fclose(file_porter);
    
    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
//! Attention : Design by yourself.
static void fun(STUDENT stu[], STUDENT *s)
{
    int i;
    //Determine the first was the minimun score.
    *s = stu[0];
    //Compare the size of the adjacent elements by index.
    for (i = 0; i < N; i++)
    {
        if (s->score > stu[i].score)
        {
            *s = stu[i];
        }
    }
}
