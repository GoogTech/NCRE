/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-07 11:58:53 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-07 15:22:12
 */

/*
 * ٩(๑>◡<๑)۶ 
 * 
 * ★★ 程序填空题
 * 
 * 通过定义学生结构体变量,存储学生的学号,姓名和三门课的成绩.函数'fun'的功能是 : 将形参'a'中的数据进行修改,把修改后的
 * 数据作为函数值返回主函数进行输出.
 */

#include <stdio.h>
#include <string.h>

/*
 * Defined the struct.
 */
struct student
{
    long id;
    char name[10];
    float score[3];
};

/*
 * Declare the method.
 */
static struct student fun(struct student stu); //TODO : static struct student fun()···

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int i;
    struct student stu = {10001, "Student-1", 95, 80, 88}, temp;
    printf("THE ORIGINAL DATA : \n");
    printf("\nID : %ld NAME : %s\nSCORE : ", stu.id, stu.name);
    for (i = 0; i < 3; i++)
    {
        printf("%6.2f", stu.score[i]);
    }
    printf("\n");

    temp = fun(stu);

    printf("\nTHE DATA AFTER MODIFIED : \n");
    printf("\nID : %ld NAME : %s\nSCORE :", temp.id, temp.name);
    for (i = 0; i < 3; i++)
    {
        printf("%6.2f", temp.score[i]);
    }
    printf("\n");

    getchar();
    return 0;
}

/*s
 * Defined the method.
 */
static struct student fun(struct student stu) //! blank
{
    int i;
    stu.id = 10002;
    strcpy(stu.name, "STUDENT-2"); //! blank
    for (i = 0; i < 3; i++)
    {
        stu.score[i] += 1; //! blank
    }
    return stu;
}
