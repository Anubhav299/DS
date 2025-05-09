// Write a program to insert a node in the end of a singly linked list.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
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
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
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
    int data;
    struct node *head, *temp;
    head = NULL;
    int choice = 1;
    int value;

    while (choice == 1)
    {
        printf("Enter a value to add to the linked list: ");
        scanf("%d", &value);

        head = insertNodeatend(head, value);

        printf("Enter 1 to insert data, anything else for exit : ");
        scanf("%d", &choice);
    }

    printf("Enter Data of node to insert at the end of singly linked list : ");
    scanf("%d", &data);

    printf("\nList before change : ");
    displayList(head);
    printf("\nList after change : ");
    head = insertNodeatend(head, data);
    displayList(head);
    return 0;
}
