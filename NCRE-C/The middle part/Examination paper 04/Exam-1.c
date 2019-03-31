/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-06 14:40:30 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-06 16:40:31
 */

/*
 *  (๑*◡*๑)
 * 
 * ★★★ 程序操作题
 * 
 * 函数'fun'的功能是将不带头节点的单向链表逆置.
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
static NODE *fun(NODE *h);
static NODE *createList(int a[]);
static NODE outList(NODE *h);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    NODE *head;
    int a[N] = {2, 4, 6, 8, 10};

    head = createList(a);
    printf("THE ORIGINAL LIST : \n");
    outList(head);

    head = fun(head);
    printf("\nTHE LIST AFTER INVERTING : \n");
    outList(head);

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static NODE *createList(int a[])
{
    NODE *p_node, *n_node, *head = NULL; //Previous-p and Next-n
    for (int i = 0; i < N; i++)
    {
        p_node = (NODE *)malloc(sizeof(NODE));
        p_node->data = a[i];
        p_node->next = NULL;
        if (head == NULL)
        {
            head = p_node = n_node;
        }
        else
        {
            n_node->next = p_node;
            p_node = n_node; //TODO : or p_node = n_node->date
        }
        return head;
    }
}

static NODE outList(NODE *head)
{
    NODE *p_node;
    p_node = head;
    if (p_node == NULL)
    {
        printf("THE LIST IS NULL !\n");
    }
    else
    {
        printf("\nHEAD");
        do
        {
            printf("->%d", p_node->data);
        } while (p_node != NULL);
        printf("->END\n");
    }
}

/**
 * TODO : DATA STRUCTURE AND ALGORITHM !
 */
static NODE *fun(NODE *head) //! Blank
{
    NODE *p_node, *n_node, *r;
    p_node = head;
    if (p_node == NULL)
    {
        printf("\nTHE LIST IS NULL !");
    }
    n_node = p_node->next;
    p_node->next = NULL;
    while (n_node)
    {
        r = n_node->next; //! Blank

        n_node->next = p_node;
        p_node = n_node;

        n_node = r; //! Blank
    }

    //! Attention
    return p_node;
}
