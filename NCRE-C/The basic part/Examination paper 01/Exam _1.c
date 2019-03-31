/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-19 15:46:04 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-19 22:35:32
 */

/*
 * （づ￣3￣）づ╭❤～ 
 * 
 * 通过定义学生结构体变量，存储学生的学号，姓名和三门课程的成绩.
 * 所有学生数据均以二进制方式输出到文件中.函数'fun'的功能是重写
 * 形参'filename'所指文件中最后一个学生的数据,既用新的学生数据
 * 覆盖该学生原来的数据,其他学生的数据不变哟 ~
 */

#include <stdio.h>
#include <stdlib.h> //system("pause");
#define N 5

/*
 * Declare the struct.
 */
typedef struct student
{
    long sno;
    char name[10];
    float score[3];
} STU;

/*
 * Declare the function.
 */
static void ouputData();
static void fun(char *filename, STU stu);

/*
 * Defined the data of student.
 */
char filename[] = "The basic part/Examination paper 01/Exam_1.dat";
STU front[N] = {
    {10001, "a", 91, 92, 77},
    {10002, "b", 75, 60, 88},
    {10003, "c", 85, 70, 78},
    {10004, "d", 90, 82, 87},
    {10005, "e", 95, 80, 88}};

//? student_end[N] : The data of fifth student.
STU end = {10006, "z", 95, 70, 68}, student_end[N];

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    FILE *file_pointer;

    //Write the data of the five student(font) and output them.
    file_pointer = fopen(filename, "wb");
    fwrite(front, sizeof(STU), N, file_pointer);
    fclose(file_pointer);

    //Read the data of student.
    file_pointer = fopen(filename, "rb");
    fread(student_end, sizeof(STU), N, file_pointer);
    fclose(file_pointer);
    //Output the data of student.
    printf("The original data :\n\n");
    ouputData();

    //Write the data of the last student(end).
    fun(filename, end);

    //Read the data of student.
    file_pointer = fopen(filename, "rb");
    fread(student_end, sizeof(STU), N, file_pointer);
    fclose(file_pointer);
    //Output the data of student.
    printf("\nThe data after modifing : \n\n");
    ouputData();

    system("pause");
    return 0;
}

/*
 * Defined the method of fun.
 */
static void fun(char *filename, STU stu)
{
    FILE *file_pointer;

    /**
     * ! Attention : blank
     * ? fopen("filename","used type");
     */
    file_pointer = fopen(filename, "rb+");

    /**
     * ! Attention : blank
     * ? int feek(FILE *stream,long offest,int fromwhere);
     */
    fseek(file_pointer, -(long)sizeof(STU), SEEK_END);

    /**
     * ! Attention : blank
     * ? fwrite/fread(buffer,size,count,file_pointer);
     */
    fwrite(&stu, sizeof(STU), 1, file_pointer);
    fclose(file_pointer);
}

/*
 * Output the data of student.
 */
static void ouputData()
{
    int i, j;
    for (j = 0; j < N; j++)
    {
        printf("\nNO : %ld NAME : %-8s SCORE : ", student_end[j].sno, student_end[j].name);
        for (i = 0; i < 3; i++)
        {
            printf("%6.2f", student_end[j].score[i]);
        }
        printf("\n");
    }
}