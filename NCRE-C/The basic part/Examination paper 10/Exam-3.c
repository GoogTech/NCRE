/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-06 21:50:57 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-06 22:01:21
 */

/*
 * 程序设计题
 * 
 * 在此程序中,请编写一个函数:其功能是:从传入的'num'个字符串中找出最长的一个字符串,并通过形参指针'max'传回该串地址(用******作为结束输入的标识). 
 */

//Declare the method.
static char *fun(char (*a)[81], int num, char *max);

//Test the program.
int main(int argc, char const *argv[])
{
    FILE *file_pointer;
    char array_a[10][81], *ps = NULL;
    char array_b[3][81] = {"abcd", "deg", "diegns"}, *p = NULL;

    int n, i = 0;
    printf("PLEASE ENTER SOME STRINGS: \n");
    gets(array_a[i]);
    puts(array_a[i]);

    while (!strcmp(array_a[i], "******") == 0)
    {
        i++;
        gets(array_a[i]);
        puts(array_a[i]);
    }

    n = i;
    ps = fun(array_a, ps);
    printf("MAX = %s\n", ps);

    //save the result into the specified file.
    file_opinter = fopen(file_name, "w");
    p = fun(array_b, 3, p);
    fprintf(file_opinter, "%s", p);
    fclose(file_opinter);

    return 0;
}
