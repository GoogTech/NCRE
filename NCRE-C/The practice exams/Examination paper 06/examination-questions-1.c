/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-20 14:44:45 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-20 14:59:44
 */

/*
 * 程序修改题-题目描述如下： 
 * 
 * 函数'fun'的功能是将'a'和'b'所指的两个字符串分别转换为面值相同的整数,并进行相加作为函数值返回,规定字符串中只含有'9'个以下数字字符.
 * 
 * 例如：主函数中输入字符串'32486'和'12345',在主函数中输出的函数值为'44831'.
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 9

long ctod(char *s)
{
    long d = 0;
    while (*s)
        if (isdigit(*s))
        {
            /**********found**********/
            d = d * 10 + *s - '0'; //! d = d * 10 + *s - '0';
            /**********found**********/
            s++;
        }
    return d;
}
long fun(char *a, char *b)
{
    /**********found**********/
    return ctod(a) + ctod(b);
}
void main()
{
    char s1[N], s2[N];
    do
    {
        printf("Input  string  s1 : ");
        gets(s1);
    } while (strlen(s1) > N);

    do
    {
        printf("Input  string  s2 : ");
        gets(s2);
    } while (strlen(s2) > N);
    printf("The result is:  %ld\n", fun(s1, s2));

    getchar();
}

/*The result be shown as followed:

Input  string  s1 : 123456
Input  string  s2 : 789
The result is:  124245

*/