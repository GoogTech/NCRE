/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-21 19:23:01 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-21 19:35:09
 */

/*
 * 程序修改题-题目描述如下所示:
 * 
 * 建立一个带头结点的单向链表,并用随机函数为各节点赋值,函数'fun'的功能是将单向链表节点(不包括头结点)数据域为偶数的值累加起来,并作为函数值返回.
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct aa
{
    int data;
    struct aa *next;
} NODE;
int fun(NODE *h)
{
    int sum = 0;
    NODE *p;
    p = h->next;
    /*************found**************/
    while (p != NULL)
    {
        if (p->data % 2 == 0)
            sum += p->data;
        /*************found**************/
        p = p->next;
    }
    return sum;
}
NODE *creatlink(int n)
{
    NODE *h, *p, *s;
    int i;
    h = p = (NODE *)malloc(sizeof(NODE));
    for (i = 1; i < n; i++)
    {
        s = (NODE *)malloc(sizeof(NODE));
        s->data = rand() % 16;
        s->next = p->next;
        p->next = s;
        p = p->next;
    }
    p->next = NULL;
    return h;
}
void outlink(NODE *h)
{
    NODE *p;
    p = h->next;
    printf("\n\n The LIST :\n\n HEAD");
    while (p)
    {
        printf("->%d", p->data);
        p = p->next;
    }
    printf("\n");
}
void main()
{
    NODE *head;
    int sum;
    system("CLS");

    head = creatlink(10);
    outlink(head);

    sum = fun(head);
    printf("\nSUM=%d", sum);

    getchar();
}

/*The result be shown as followed:

The LIST :

HEAD->9->3->14->4->1->12->6->14->2

SUM=52

*/
