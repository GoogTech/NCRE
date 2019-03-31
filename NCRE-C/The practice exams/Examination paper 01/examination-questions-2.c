/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-19 23:34:56 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-19 23:45:33
 */

/*
 * 程序修改题-题目描述如下: 
 * 在此程序中,函数'Creatlink'的功能是: 创建带头结点的单向链表,并为各节点数据域赋'0'到'm-1'的值.
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct aa
{
    int data;
    struct aa *next;
} NODE;
NODE *Creatlink(int n, int m)
{
    NODE *h = NULL, *p, *s;
    int i;
    /**********found***********/
    p = (NODE *)malloc(sizeof(NODE));
    h = p;
    p->next = NULL;
    for (i = 1; i <= n; i++)
    {
        s = (NODE *)malloc(sizeof(NODE));
        s->data = rand() % m;
        s->next = p->next; //p->next = NULL;
        p->next = s;
        p = p->next;
    }
    /**********found***********/
    return h; //retrun head of node.
}
void outlink(NODE *h)
{
    NODE *p;
    p = h->next;
    printf("\n\nTHE  LIST :\n\n  HEAD ");
    while (p)
    {
        printf("->%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
void main()
{
    NODE *head;
    head = Creatlink(8, 22);
    outlink(head);

    getchar();
}

/*The result be shown as followd :

THE  LIST :

  HEAD ->19 ->9 ->20 ->12 ->7 ->16 ->16 ->10

*/
