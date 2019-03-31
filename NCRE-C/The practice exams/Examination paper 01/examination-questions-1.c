/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-19 23:13:45 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-19 23:33:55
 */

/* 
 * 程序填空题-题目描述 :
 * 程序通过定义学生结构体变量,存储了学生的学号,姓名和三门课的成绩,所有学生数据均以二进制方式方式输出到文件中.
 * 函数'fun'的功能是重写形参'filename'所指文件中最后一个学生的数据,既用新的学生数据覆盖该学生原来的数据,其他学生的数据不变.
 */

#include <stdio.h>
#define N 5
typedef struct student
{
    long sno;
    char name[10];
    float score[3];
} STU;
void fun(char *filename, STU n)
{
    FILE *fp;
    /**********found**********/
    fp = fopen(filename, "rb+");
    /**********found**********/
    fseek(fp, -(long)sizeof(STU), SEEK_END);
    /**********found**********/
    fwrite(&n, sizeof(STU), 1, fp);
    fclose(fp);
}
void main()
{
    char filename[] = "student.dat";
    
    STU t[N] = {{10001, "MaChao", 91, 92, 77},
                {10002, "CaoKai", 75, 60, 88},
                {10003, "LiSi", 85, 70, 78},
                {10004, "FangFang", 90, 82, 87},
                {10005, "ZhangSan", 95, 80, 88}};

    STU n = {10006, "ZhaoSi", 55, 70, 68}, ss[N];
    int i, j;
    FILE *fp;
    fp = fopen(filename, "wb");
    fwrite(t, sizeof(STU), N, fp);
    fclose(fp);
    
    fp = fopen(filename, "rb");
    fread(ss, sizeof(STU), N, fp);
    fclose(fp);

    printf("\nThe original data :\n\n");
    for (j = 0; j < N; j++)
    {
        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
        for (i = 0; i < 3; i++)
            printf("%6.2f ", ss[j].score[i]);
        printf("\n");
    }
    
    fun(filename, n);
    printf("\nThe data after modifing :\n\n");
    fp = fopen(filename, "rb");
    fread(ss, sizeof(STU), N, fp);
    fclose(fp);

    for (j = 0; j < N; j++)
    {
        printf("\nNo: %ld  Name: %-8s      Scores:  ", ss[j].sno, ss[j].name);
        for (i = 0; i < 3; i++)
            printf("%6.2f ", ss[j].score[i]);
        printf("\n");
    }

    getchar();
}


/* result be shown as followed : 


The original data :


No: 10001  Name: MaChao        Scores:   91.00  92.00  77.00

No: 10002  Name: CaoKai        Scores:   75.00  60.00  88.00

No: 10003  Name: LiSi          Scores:   85.00  70.00  78.00

No: 10004  Name: FangFang      Scores:   90.00  82.00  87.00

No: 10005  Name: ZhangSan      Scores:   95.00  80.00  88.00

The data after modifing :


No: 10001  Name: MaChao        Scores:   91.00  92.00  77.00

No: 10002  Name: CaoKai        Scores:   75.00  60.00  88.00

No: 10003  Name: LiSi          Scores:   85.00  70.00  78.00

No: 10004  Name: FangFang      Scores:   90.00  82.00  87.00

No: 10006  Name: ZhaoSi        Scores:   55.00  70.00  68.00


*/