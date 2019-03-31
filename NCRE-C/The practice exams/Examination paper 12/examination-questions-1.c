/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 11:07:23 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 11:14:31
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 函数'fun'的功能是将带头结点的单向链表节点数据域中的数据从小到大排序.
 */

#include <stdio.h>
#include <stdlib.h>

#define N 6
typedef struct nodeb
{
    int data;
    struct node *next;
} NODE;

void fun(NODE *h)
{
    NODE *p, *q;
    int t;
    /**********found**********/
    p = h->next; //? 'p'为指向头结点的下一个节点.
    while (p)
    {
        /**********found**********/
        q = p->next; //? 'q'代表'p'的下一个数.
        while (q)
        {
            /**********found**********/
            if (p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
            q = q->next;
        }
        p = p->next;
    }
}
NODE *creatlist(int a[])
{
    NODE *h, *p, *q;
    int i;
    h = (NODE *)malloc(sizeof(NODE));
    h->next = NULL;
    for (i = 0; i < N; i++)
    {
        q = (NODE *)malloc(sizeof(NODE));
        q->data = a[i];
        q->next = NULL;
        if (h->next == NULL)
            h->next = p = q;
        else
        {
            p->next = q;
            p = q;
        }
    }
    return h;
}
void outlist(NODE *h)
{
    NODE *p;
    p = h->next;
    if (p == NULL)
        printf("The list is NULL!\n");
    else
    {
        printf("\nHead  ");
        do
        {
            printf("->%d", p->data);
            p = p->next;
        } while (p != NULL);
        printf("->End\n");
    }
}

void main()
{
    NODE *head;
    int a[N] = {0, 10, 4, 2, 8, 6};

    head = creatlist(a);
    printf("\nThe original list:\n");
    outlist(head);

    fun(head);
    printf("\nThe list after sorting :\n");
    outlist(head);

    getchar();
}

/*The result be shown as followed:

The original list:

Head  ->0->10->4->2->8->6->End

The list after sorting :

Head  ->0->2->4->6->8->10->End

*/
