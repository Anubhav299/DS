#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};


struct node *createnode(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    return new;
}


struct node *nodeatnode(struct node *head,int data)
{
    struct node
}