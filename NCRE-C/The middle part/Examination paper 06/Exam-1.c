/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-15 17:05:01 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-15 17:57:06
 */

/*
 * ★★★程序填空题
 * 
 * 函数'fun'的功能是:将带头结点的单向链表逆置.
 * 
 * Result as followed : 
 *       THE ORIGINAL LIST :
 *       HEAD->2->4->6->8->10->END
 *
 *       THE LIST AFTER INVERTING :
 *       HEAD->10->8->6->4->2->END
 */

#include <stdio.h>
#include <stdlib.h>
#define N 5

/*
 * Declare the struct.
 */
typedef struct node
{
    int data;
    struct node *next;
} NODE;

/*
 * Declare the method.
 */
static NODE *createList(int array[]);
static void outList(NODE *head);
static void fun(NODE *head);

/*
 * Test the method.
 */
int main(int argc, char const *argv[])
{
    NODE *head;
    int array[N] = {2, 4, 6, 8, 10};
    head = createList(array);

    printf("THE ORIGINAL LIST : ");
    outList(head);
    fun(head);

    printf("\nTHE LIST AFTER INVERTING : ");
    outList(head);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static void fun(NODE *head)
{
    NODE *p, *q, *r;
    p = head->next; //! blank
    if (p == NULL)  //! blank
    {
        return;
    }
    q = p->next;
    p->next = NULL;

    while (q)
    {
        r = q->next;
        q->next = p; // q->next = NULL;
        p = q;
        q = r; //! blank
    }

    head->next = p;
}

static NODE *createList(int array[])
{
    NODE *head, *p, *q;

    head = (NODE *)malloc(sizeof(NODE));
    head->next = NULL;
    for (int i = 0; i < N; i++)
    {
        q = (NODE *)malloc(sizeof(NODE));
        q->data = array[i];
        q->next = NULL;
        if (head->next == NULL)
        {
            head->next = p = q;
        }
        else
        {
            p->next = q;
            p = q;
        }
    }
    return head;
}

static void outList(NODE *head)
{
    NODE *pNode;
    pNode = head->next;
    if (pNode == NULL)
    {
        printf("\nTHE LIST IS NULL !\n");
    }
    else
    {
        printf("\nHEAD");
        do
        {
            printf("->%d", pNode->data);
            pNode = pNode->next;
        } while (pNode != NULL);
        printf("->END\n");
    }
}