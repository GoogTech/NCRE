/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 14:59:53 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 15:12:22
 */

/*
 * 程序修改题-题目描述如下所示： 
 * 
 * 在此程序中,函数'fun'的功能是:分别统计字符串中大写和小写字母对的个数. 
 */

#include <stdio.h>
/**********found**********/
void fun(char *s, int *a, int *b)
{
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z')
            /**********found**********/
            *a = *a + 1;
        if (*s >= 'a' && *s <= 'z')
            /**********found**********/
            *b = *b + 1;
        s++;
    }
}

void main()
{
    char s[100];
    int upper = 0, lower = 0;
    printf("\nPlease a string :  ");
    gets(s);

    fun(s, &upper, &lower);
    printf("\n upper = %d  lower = %d\n", upper, lower);

    getchar();
}

/*The result be shown as followed:

Please a string :  My personal website : https://YUbuntu0109.github.io

upper = 3  lower = 34

*/
