/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 14:19:12 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 14:32:41
 */

/*
 * 程序修改题-题目描述如下： 
 * 
 * 函数'fun'的功能是:统计字符串中各元音字母的个数,注意：字母不分大小写.
 * 例如：输入"THIs is a boot",则应该输出的是： 1 0 2 2 0
 * (懵（◐ˍ◑）)
 */

#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
/*************found**************/
void fun(char *s, int num[5]) //void fun(char *s,int num[5]){..}
{
    int k, i = 5;
    for (k = 0; k < i; k++)
        /*************found**************/
        num[k] = 0;
    for (; *s; s++)
    {
        i = -1;
        /*************found**************/
        switch (*s)
        {
        case 'a':
        case 'A':
        {
            i = 0;
            break;
        }
        case 'e':
        case 'E':
        {
            i = 1;
            break;
        }
        case 'i':
        case 'I':
        {
            i = 2;
            break;
        }
        case 'o':
        case 'O':
        {
            i = 3;
            break;
        }
        case 'u':
        case 'U':
        {
            i = 4;
            break;
        }
        }
        if (i >= 0)
            num[i]++;
    }
}
void main()

{
    char s1[81];
    int num1[5], i;

    system("CLS");
    printf("\nPlease enter a string: ");
    gets(s1);

    fun(s1, num1);

    for (i = 0; i < 5; i++)
        printf("%d ", num1[i]);
    printf("\n");

    getchar();
}

/*The result be shown as followed:

Please enter a string: THis is a boot
1 0 2 2 0

*/
