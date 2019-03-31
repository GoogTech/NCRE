/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 15:12:39 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 15:25:44
 */

/* 
 * 程序设计题-题目描述如下所示:
 * 
 * 编写一个函数'float fun(double h)'.该函数的功能是: 使变量'h'中的值保留两位小数,并对第三位进行四舍五入(规定'h'中的值为正数).
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float fun(float h)
{
    /* 
     * 单精度数'h'乘以'1000'后再加'5',相当于对'h'中的第三位小数进行四舍五入.
     * 除以'10'后将其赋给一个长整型数时就把第三位小时后的数全部截去.
     */
    int temp = (int)(h * 1000 + 5) / 10;
    /*
     * 除以100,保留两位小时.
     */
    return (float)temp / 100.0;
}

void main()
{
    FILE *wf;
    float a;

    system("CLS");
    printf("Enter a: ");
    scanf("%f", &a);

    printf("The original data is :  ");
    printf("%f\n\n", a);

    printf("The  result : %f\n", fun(a));

    /******************************/
    wf = fopen("E://GitHub//Workbench-VSCode+GitHub//C//NCRE-C//The practice exams//Examination paper 06//out.dat", "w");
    fprintf(wf, "%f", fun(8.32533));
    fclose(wf);
    /*****************************/
}
