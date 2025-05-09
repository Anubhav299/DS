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

struct node *deletehead(struct node *head)
{
    struct node *newHead;
    newHead = head;
    head = head->next;
    free(newHead);
    return head;
}

struct node *deletetail(struct node *head)
{
    struct node *temp, *temp2;
    temp = head;

    while(temp->next->next!=NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

struct node *deleteAtPos(struct node *head, int x)
{
    int i;
    struct node *temp, *temp2;

    if(x==1)
    {
        head = deletehead(head);
    }
    else
    {
        i = 1;
        temp = head;
        while(i!=(x-1) && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp == NULL || temp->next == NULL)
        {
            printf("\nOut of Bounds.");
        }
        else
        {
            temp2 = temp->next;
            temp->next = temp->next->next;
            free(temp2);
        }
    }

    return head;
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

    printf("Enter Position : ");
    scanf("%d", &pos);

    printf("Before Change : ");
    displayList(head);

    head = deleteAtPos(head, pos);

    printf("\nAfter Change : ");
    displayList(head);    
}
