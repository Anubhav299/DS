#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *createNode(int data) 
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct node *insertNodeatend(struct node *head, int data) 
{
    struct node *temp, *newNode;
    newNode = createNode(data);
    if (head == NULL) 
    {
        head = newNode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
        
    return head;
}

struct node *Reverse(struct node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct node *rest = Reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return rest;
}

void displayList(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->next == NULL)
        {
            printf("%d", temp->data);
        }
        else
        {
            printf("%d -> ", temp->data);
        }
        temp = temp->next;
    }

}

int main()
{
    int val,pos;
    struct node *head, *temp, *new;
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    temp = head;

    printf("Before Change : ");
    displayList(head);

    head = Reverse(head);
    printf("\nAfter Change : ");
    displayList(head);    
}
