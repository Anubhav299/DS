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

struct node *insertNodefront(struct node *head,int data)
{
    struct node *new, *temp;
    new = createNode(data);
    new->next = head;
    head = new;
    return head;
}

struct node *insertNodeBetween(struct node *head, int data, int x)
{
    int i = 1;
    struct node *temp, *new;
    new = createNode(data);
    if(x==1)
    {
        head = insertNodefront(new, data);
    }
    else
    {
        temp = head;
        while(i!=(x-1) && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) 
        {
            // Handle invalid position (out of bounds)
            printf("Position is out of bounds.\n");
            free(new);  // Free the allocated node if not inserted
        } 
        else 
        {
            new->next = temp->next;
            temp->next = new;
        }
    }

    return head;
}

int main()
{
    int val,pos;
    struct node *head, *temp, *new;
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    temp = head;

    printf("\nEnter data : ");
    scanf("%d", &val);
    printf("Enter Position : ");
    scanf("%d", &pos);

    printf("Before Change : ");
    displayList(head);

    // head = insertNodefront(head, val);
    head = insertNodeBetween(head, val, pos);
    printf("\nAfter Change : ");
    displayList(head);    
}
