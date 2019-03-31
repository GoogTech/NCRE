/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 13:34:48 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 13:44:34
 */

/*
 * 程序修改题-题目描述如下:
 * 
 * 函数'fun'的功能是:首先把'b'所指字符串中的字符按逆序存放,然后将'a'所指字符串中的字符和'b'所指字符串中的字符按排列的顺序交叉合并到'c'
 * 所指的数组中,过长的剩余字符接在'c'所指的数组的尾部. (表示题目很抽象...(ಥ_ಥ)..)
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fun(char *a, char *b, char *c)
{
    int i, j;
    char ch;
    i = 0;
    j = strlen(b) - 1;
    /************found************/
    while (i < j) //! i < j
    {
        ch = b[i];
        b[i] = b[j];
        b[j] = ch;
        i++;
        j--;
    }
    while (*a || *b)
    {
        /************found************/
        if (*a)
        {
            *c = *a;
            c++;
            a++;
        }
        if (*b)
        {
            *c = *b;
            c++;
            b++;
        }
    }
    *c = 0;
}

void main()
{
    char s1[100], s2[100], t[200];

    printf("\nEnter s1 string : ");
    scanf("%s", s1);

    printf("\nEnter s2 string : ");
    scanf("%s", s2);
    fun(s1, s2, t);
    printf("\nThe result is : %s\n", t);

    system("pause");
}

/*The result be shown as followed:

Enter s1 string : YUbuntu

Enter s2 string : 0109

The result is : Y9U0b1u0ntu
Press any key to continue . . .

*/