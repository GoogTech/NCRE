/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-25 21:59:19 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-26 07:59:53
 */

/*
 * 程序填空题-题目描述如下: 
 * 
 * 通过定义学生结构体变量,存储了学生的学号,姓名和三门课的成绩.所有学生数据均以二进制方式输出到文件,
 * 函数'fun'的功能是从形参'filename'所指的文件中读入学生数据,并按照学号从小到大排序后,再用二进制方
 * 式把排序后的学生数据输出到'filename'所指的文件中.覆盖原来的文件内容.  
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5

typedef struct student
{
    long sno;
    char name[10];
    float score[3];
} STU;

void fun(char *filename)
{
    FILE *fp;
    int i, j;
    STU s[N], t;

    /**********found**********/
    fp = fopen(filename, "rb"); //? 从形参'filename'所指的文件中读入学生的数据.
    fread(s, sizeof(STU), N, fp);
    fclose(fp);

    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
            /**********found**********/
            if (s[i].sno > s[j].sno)
            {
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }

    fp = fopen(filename, "wb");
    /**********found**********/
    fwrite(s, sizeof(STU), N, fp); //? 所有的学生数据均以二进制方式输出到文件中.
    fclose(fp);
}

void main()
{
    STU t[N] = {{10005, "ZhangSan", 95, 80, 88}, {10003, "LiSi", 85, 70, 78}, {10002, "CaoKai", 75, 60, 88}, {10004, "FangFang", 90, 82, 87}, {10001, "MaChao", 91, 92, 77}}, ss[N];
    int i, j;
    FILE *fp;
    fp = fopen("student.dat", "wb");
    fwrite(t, sizeof(STU), 5, fp);
    fclose(fp);

    printf("\n\nThe original data :\n\n");
    for (j = 0; j < N; j++)
    {
        printf("\nNo: %ld  Name: %-8s      Scores:  ", t[j].sno, t[j].name);
        for (i = 0; i < 3; i++)
            printf("%6.2f ", t[j].score[i]);
        printf("\n");
    }

    fun("student.dat");
    printf("\n\nThe data after sorting :\n\n");
    fp = fopen("student.dat", "rb");
    fread(ss, sizeof(STU), 5, fp);
    fclose(fp);

    for (j = 0; j < N; j++)
    {
        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
        for (i = 0; i < 3; i++)
            printf("%6.2f ", ss[j].score[i]);
        printf("\n");
    }

    system("pause");
}

/*The result be shown as followed:


No: 10005  Name: ZhangSan      Scores:   95.00  80.00  88.00

No: 10003  Name: LiSi          Scores:   85.00  70.00  78.00

No: 10002  Name: CaoKai        Scores:   75.00  60.00  88.00

No: 10004  Name: FangFang      Scores:   90.00  82.00  87.00

No: 10001  Name: MaChao        Scores:   91.00  92.00  77.00


The data after sorting :


No: 10005  Name: ZhangSan      Scores:   95.00  80.00  88.00

No: 10003  Name: LiSi          Scores:   85.00  70.00  78.00

No: 10002  Name: CaoKai        Scores:   75.00  60.00  88.00

No: 10004  Name: FangFang      Scores:   90.00  82.00  87.00

No: 10001  Name: MaChao        Scores:   91.00  92.00  77.00
Press any key to continue . . .

*/