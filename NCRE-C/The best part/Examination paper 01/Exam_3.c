/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-25 20:55:36 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-25 21:31:28
 */

/*
 *  ヾ(◍°∇°◍)ﾉﾞ
 * 
 * 程序设计题
 * 某学生的记录由学号,八门课程成绩和平均分组成.请编写函数'fun'.其功能是：求出该学生的平均分.并放入记录'average'成员中.
 */

/*
 * Include the header file.
 */
#include <stdio.h>
#define N 8

/*
 * Defined the struct.
 */
typedef struct student
{
    char id[10];
    double score[N];
    double average;
} STUDNET;

/*
 * Declare the method.
 */
static void fun(STUDNET *stu);
static void IO();

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    STUDNET stu = {"GA005", 85.5, 76, 69.5, 85, 91, 72, 64.5, 87.5};
    int i;

    fun(&stu);
    printf("The %s's student data:\n", stu.id);
    for (i = 0; i < N; i++)
    {
        printf("%4.1f\n", stu.score[i]);
    }
    printf("\nAverage = %7.3f\n", stu.average);
    IO();

    system("pause");
    return 0;
}

/*
 * Defined the method of NONO.
 */
static void IO()
{
    char filename[] = "The best part/Examination paper 01/Exam_3.dat";
    FILE *file_inporter;
    //! warning: unused variable 'j' [-Wunused-variable]
    int i, j;
    STUDNET stu_data[10] = {
        {"GA005", 85.5, 76, 69.5, 85, 91, 72, 64.5, 87.5},
        {"GA001", 82.5, 66, 76.5, 76, 89, 76, 46.5, 78.5},
        {"GA002", 72.5, 56, 66.5, 66, 79, 68, 46.5, 58.5},
        {"GA003", 92.5, 76, 86.5, 86, 99, 86, 56.5, 88.5},
        {"GA004", 82, 66.5, 46.5, 56, 76, 75, 76.5, 63.5},
        {"GA006", 75.5, 74, 71.5, 85, 81, 79, 64.5, 71.5},
        {"GA007", 92.5, 61, 72.5, 84, 79, 75, 66.5, 72.5},
        {"GA008", 72.5, 86, 73.5, 80, 69, 63, 76.5, 53.5},
        {"GA009", 66.5, 71, 74.5, 70, 61, 82, 86.5, 58.5},
        {"GA010", 76, 66.5, 75.5, 60, 76, 71, 96.5, 93.5},
    };
    file_inporter = fopen(filename, "w");
    for (i = 0; i < 10; i++)
    {
        fun(&stu_data[i]);
        fprintf(file_inporter, "%7.3f\n", stu_data[i].average);
    }
    fclose(file_inporter);
}

/**
 * todo : Defined the method of 'fun'.
 * ?Attention : The algorithm is so simple !
 * !Attention : Design by yourself.
 */
static void fun(STUDNET *stu)
{
    int i;
    stu->average = 0.0;
    for (i = 0; i < N; i++)
    {
        stu->average = stu->average + stu->score[i];
    }
    stu->average = stu->average / N;
}