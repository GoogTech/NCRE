/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 15:23:22 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 15:36:22
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 主函数已给出由结构体构成的链表节点'a','b','c'各结点的数据域中均存入字符,函数'fun()'的作用是:
 * 将'a','b','c'三个结点链接成一个单向链表,并输出链表节点中的数据. 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    char data;
    struct list *next;
} Q;

void fun(Q *pa, Q *pb, Q *pc)
{
    Q *p;
    /**********found**********/
    pa->next = pb;
    pb->next = pc;
    p = pa;
    while (p)
    {
        /**********found**********/
        printf("  %c", p->data);
        /**********found**********/
        p = p->next;
    }

    printf("\n");
    system("pause");
}

void main()
{
    Q a, b, c;

    a.data = 'E';
    b.data = 'F';
    c.data = 'G';
    c.next = NULL;

    fun(&a, &b, &c);
}

/*The result be shown as followed:

E  F  G
Press any key to continue . . .

*/