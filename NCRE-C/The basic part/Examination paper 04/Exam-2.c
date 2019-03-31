/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-31 10:13:07 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-31 11:30:56
 */

/*
 *  (～￣▽￣)～ 
 * 
 * 程序修改题
 * 此程序的功能：读入一个英文文本行,将其中每一个单词的第一个字母该成大写,然后输出此文本行.这里的'单词'是指由空格隔开的字符串.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Declare the method.
 */
static void fun(char *word);
//TODO : warning: implicit declaration of function 'toupper' [-Wimplicit-function-declaration]
int toupper();


  

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    char word[100];
    system("CLS");
    printf("Please enter an English text line : ");
    gets(word);

    fun(word);
    printf("\nAfter changing : %s\n", word);

    system("pause");
    return 0;
}

/*
 * Defined the method.
 */
static void fun(char *word)
{
    int k = 0;
    for (; *word; word++) //TODO : The inpointer is so simple !
    {
        if (k) //TODO : 0-False and 1-True.
        {
            if (*word == ' ')
            {
                k = 0;
            }
        }
        else
        {
            if (*word != ' ')
            {
                k = 1;
                *word = toupper(*word); //? toupper();
            }
        }
    }
}
