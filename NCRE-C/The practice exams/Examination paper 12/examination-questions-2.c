/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-22 11:49:29 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-22 12:01:11
 */

/* 
 * 程序修改题-题目描述如下:
 * 
 * 建立一个带头结点的单向链表,并用随机函数为各节点数据域赋值,
 * 函数'fun'的作用是求出单向链表节点(不包括头结点)数据于中的最大值并作为函数值返回.
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
    int max = -1;
    NODE *p;
    /*************found**************/
    p = h->next; //! p = h->next
    while (p)    //? or : p != NULL
    {
        if (p->data > max)
            max = p->data;
        /*************found**************/
        p = p->next; //? p = p->next
    }
    return max;
}

void outresult(int s, FILE *pf)
{
    fprintf(pf, "\nThe max in link :%d\n", s);
}

NODE *creatlink(int n, int m)
{
    NODE *h, *p, *s;
    int i;
    h = p = (NODE *)malloc(sizeof(NODE));
    h->data = 9999;
    for (i = 1; i <= n; i++)
    {
        s = (NODE *)malloc(sizeof(NODE));
        s->data = rand() % m;
        s->next = p->next;
        p->next = s;
        p = p->next;
    }
    p->next = NULL;

    return h;
}

void outlink(NODE *h, FILE *pf)
{
    NODE *p;
    p = h->next;
    fprintf(pf, "\n The LIST :\n\n HEAD");
    while (p)
    {
        fprintf(pf, "->%d", p->data);
        p = p->next;
    }
    fprintf(pf, "\n");
}

void main()
{
    NODE *head;
    int m;

    system("CLS");
    head = creatlink(12, 100);
    outlink(head, stdout);

    m = fun(head); //head
    printf("\nThe RESULT :\n");
    outresult(m, stdout);

    getchar();
}

/*The result be shown as followed:


The LIST :

HEAD->41->67->34->0->69->24->78->58->62->64->5->45

The RESULT :

The max in link :78

*/