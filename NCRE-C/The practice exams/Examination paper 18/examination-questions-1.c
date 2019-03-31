/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-23 10:12:48 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-23 10:36:29
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 在此程序中,函数'fun'的功能是:判断形参's'所指字符串是否是'回文(Palindrome)',若是,函数返回值为'1',不是,函数返回值为'0'.
 * 回文是正读和反读一样的字符串(不区分大小写字母). 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int fun(char *s)
{
    char *lp, *rp;
    /**********found**********/
    lp = s;                 //? 'lp'指向字符串数组的开头元素.
    rp = s + strlen(s) - 1; //? 'rp'指向字符串数组的结尾元素.
    //? toupper():
    while ((toupper(*lp) == toupper(*rp)) && (lp < rp))
    {
        /**********found**********/
        lp++;
        rp--;
    }
    /**********found**********/
    if (lp < rp) //?如果是'回文',那么此时:lp==rp
        return 0;
    else
        return 1;
}

void main()
{
    char s[81];
    printf("Enter a string:  ");
    scanf("%s", s);

    if (fun(s))
        printf("\n\"%s\" is a Palindrome.\n\n", s);
    else
        printf("\n\"%s\" isn't a Palindrome.\n\n", s);

    system("pause");
}

/*The result be shown as followed:

Enter a string:  YUbuntu0109

"YUbuntu0109" isn't a Palindrome.

Press any key to continue . . .



Enter a string:  YUbuntu01099010utnubUY

"YUbuntu01099010utnubUY" is a Palindrome.

Press any key to continue . . .

*/