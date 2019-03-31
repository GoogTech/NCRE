/*
 * @Author: HuangYuhui 
 * @Date: 2019-01-19 20:58:42 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-01-19 21:58:59
 */

/*
 * （づ￣3￣）づ╭❤～ 
 * 
 * 函数'Crealink'的功能是：创建带头节点的单向链表.并为各节点数据域赋'0'到'm-1'的值. 
 */

#include <stdio.h>
#include <stdlib.h>

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
static NODE *CreateLink(int n, int m);
static void OutLink(NODE *headNode);

/*
 * Test the program.
 */
int main(int argc, char const *argv[])
{
    NODE *head;
    head = CreateLink(8, 22);
    OutLink(head);

    getchar();
    return 0;
}

/*
 * Defined the method of creating the link.
 */
static NODE *CreateLink(int n, int m)
{
    NODE *head = NULL;
    NODE *pointer, *node;
    int i;

    /**
     * ! error: conversion to non-scalar type requested
     * ? Allocate memory space.
     */
    pointer = (NODE *)malloc(sizeof(NODE));
    head = pointer;

    pointer->next = NULL;
    for (i = 1; i <= n; i++)
    {
        node = (NODE *)malloc(sizeof(NODE));
        node->data = rand() % m;

        /**
         * todo : The algorithm is so simple ~
         */
        node->next = pointer->next;
        pointer->next = node;
        pointer = pointer->next;
    }
    //! Return the head node of link.
    return head;
}

/*
 * Print the data of link.
 */
static void OutLink(NODE *head)
{
    NODE *pointer;
    pointer = head->next;
    printf("--- THE LIST AS FOLLOWED --- \n\nHEAD");
    while (pointer)
    {
        printf("-> %d", pointer->data);
        pointer = pointer->next;
    }
    printf("\n");
}