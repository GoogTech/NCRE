/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-06 16:06:43 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-06 16:31:08
 */

/*
 *  (๑*◡*๑)
 * 
 * ★★ 程序修改题
 * 
 * 请编写函数'fun',其功能是 : 将M行N列的二维数组中的数据,按'列'的顺序依次放到一维数组中,一维数组中数据的个数存在形参'n'所指的存储单元中.
 */
#include <stdio.h>

/*
 * Declare the method.
 */
static void fun(int (*s)[10], int *a, int *n, int mm, int nn); //? int(*s)[10]

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    int w[10][10] = {{33, 33, 33, 33}, {44, 44, 44, 44}, {55, 55, 55, 55}}, i, j;
    int a[100] = {0}, n = 0;

    printf("THE MATRIX : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%3d", w[i][j]);
        }
        printf("\n");
    }

    fun(w, a, &n, 3, 4);
    printf("\nTHE ARRAY OF A : \n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }

    getchar();
    return 0;
}

/**
 * ! THE OPINTER ON C.
 * TODO : Defined the method by yourself.
 */
static void fun(int (*s)[10], int *a, int *n, int mm, int nn)
{
    int i, j;
    for (j = 0; j < nn; j++)
    {
        for (i = 0; i < mm; i++)
        {
            a[*n] = *(*(s + i) + j); //? what'is this !
            *n = *n + 1;
        }
    }
}