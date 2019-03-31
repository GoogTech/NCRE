/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-26 07:59:32 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-26 08:48:44
 */

/*
 * 程序设计题-题目描述如下:
 * 
 * 请编写函数'fun',该函数的功能是:统计各年龄段的人数.'N'个年龄通过调用随机函数获得,并放入主函数的'age'数组中,
 * 要求函数把'0->9'岁年龄段的人放在'd[0]'中,把'10->19'岁年龄的人数放在'd[1]'中,把'20->29'岁年龄段的人数放在
 * 'd[2]'中,依次类推,把'100'(含100岁)以上年龄的人数都放在'd[10]'中,结果在主函数中输出. 
 */

#include <stdio.h>
#include <stdlib.h>
#define N 50
#define M 11

void fun(int *a, int *b)
{
    int i, j;
    //? 初始化数组中的元素.
    for (i = 0; i < M; i++)
    {
        b[i] = 0;
    }
    //? 分别统计'a'中各年龄段的人数.
    for (j = 0; j < N; j++)
    {
        if (a[j] >= 100)
        {
            b[10]++;
        }
        else
        {
            //! 由'a[i]'得到'b'的下标值.既而进行分类存储.
            b[a[j] / 10]++;
        }
    }
}

double rnd()
{
    static int t = 29, c = 217, m = 1024, r = 0;
    r = (r * t + c) % m;

    return ((double)r / m);
}

void main()
{
    FILE *wf;
    int age[N], i, d[M];
    int b[N] = {32, 45, 15, 12, 86, 49, 97, 3, 44, 52, 17, 95, 63};

    for (i = 0; i < N; i++)
        age[i] = (int)(115 * rnd()); /*产生一个随机的年龄数组*/

    printf("The original data :\n");
    for (i = 0; i < N; i++)
        printf((i + 1) % 10 == 0 ? "%4d\n" : "%4d", age[i]); /*每行输出10个数*/
    printf("\n\n");

    fun(age, d);
    for (i = 0; i < 10; i++)
        printf("%4d---%4d  :%4d\n", i * 10, i * 10 + 9, d[i]);
    printf("Over 100  :  %4d\n", d[10]);

    /******************************/
    wf = fopen("out.dat", "w");
    fun(b, d);
    for (i = 0; i < 10; i++)
        fprintf(wf, "%4d---%4d  :%4d\n", i * 10, i * 10 + 9, d[i]);
    fprintf(wf, "Over 100  :  %4d", d[10]);
    fclose(wf);
    /*****************************/

    system("pause");
}

/*The result be shown as followed:

The original data :
  24  41  66 109  85  74   8  38 109 101
  87  18  98   5  72  48  51  17  78  13
  83  22 107  29  79  20  42  95  39  11
 113  97  78 109  91  33  81  85  91  20
  48  54 112  57  94  16  39  30 105  86


   0---   9  :   2
  10---  19  :   5
  20---  29  :   5
  30---  39  :   5
  40---  49  :   4
  50---  59  :   3
  60---  69  :   1
  70---  79  :   5
  80---  89  :   6
  90---  99  :   6
Over 100  :     8
Press any key to continue . . .

*/