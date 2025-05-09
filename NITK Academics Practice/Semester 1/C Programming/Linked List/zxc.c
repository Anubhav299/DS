#include <stdio.h>
#include <stdlib.h>


struct Node 
{
    int data;
    struct Node* next;
};


struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


struct Node * insertNodeatend(struct Node* head, int data) 
{
    struct Node *temp, *newNode;
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

void displayList(struct Node *head)
{
    struct Node *temp=head;
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
    struct Node *head, *temp;
    head = NULL;
    int choice = 1;
    int value;

    while (choice == 1) 
    {
        printf("Enter a value to add to the linked list: ");
        scanf("%d", &value);

        head = insertNodeatend(head, value);

        printf("Do you want to add another value? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }

    displayList(head);
    return 0;
}
