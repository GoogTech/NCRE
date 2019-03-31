/*
 * @Author: Huang Yuhui 
 * @Date: 2019-02-17 16:51:27 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-02-17 17:32:05
 */

/*
 * 程序填空题
 * 
 * 函数'fun'功能是 : 将不带头节点的单向链表节点数据域中的数据从小到大排序.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 6

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
static void fun(NODE *head);
static void outList(NODE *head);
static NODE *createList(int array[]);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    NODE *head;
    int array[N] = {0, 10, 4, 2, 8, 6};
    head = createList(array);

    printf("THE ORIGINAL LIST :  ");
    outList(head);

    fun(head);
    printf("\nTHE LIST AFTER INVERTING :  ");
    outList(head);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static NODE *createList(int array[])
{
    NODE *p, *q, *h = NULL;
    for (int i = 0; i < N; i++)
    {
        q = (NODE *)malloc(sizeof(NODE));
        q->data = array[i];
        q->next = NULL;
        if (h == NULL)
        {
            h = p = q;
        }
        else
        {
            //? Attention about the algorithm.
            p->next = q;
            p = q;
        }
    }
    return h;
}

static void outList(NODE *head)
{
    NODE *pNode = head;
    if (pNode == NULL)
    {
        printf("ERROR : THE LIST IS NULL !\n");
    }
    else
    {
        printf("HEAD");
        do
        {
            printf("->%d", pNode->data);
            pNode = pNode->next;
        } while (pNode != NULL);
        printf("->END\n");
    }
}

static void fun(NODE *head)
{
    NODE *q, *p = head;
    int t;
    while (p)
    {
        q = p->next; //! blank
        while (q)    //! blank
        {
            if (p->data > q->data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
            q = q->next;
        }
        p = p->next; //! blank
    }
}
