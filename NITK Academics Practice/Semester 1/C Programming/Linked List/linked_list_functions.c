//Write a program to delete a node from the front of the linked list.

#include <stdio.h>
#include <stdlib.h>


struct node 
{
    int data;
    struct node *next;
}typedef node;


node *createNode(int data) 
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

node *insertNodeatend(node *head, int data) 
{
    node *temp, *newNode;
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

node *deleteHead(node *head)
{
    head = head->next;
    return head;
}

node *deleteEnd(node *head)
{
    node *temp = head;

}
void displayList(node *head)
{
    node *temp=head;
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
    node *head, *temp;
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

    while(choice != 8)
    {
        printf("1. Display list values\n2. Add element at end\n3.Add element at first\n4. Add element at desired position other than (1)\n5. Deletion of node\n6. Counting number of nodes\n7. Search for an element\n8. Exit");
        printf("Enter your Choice ");
        switch(choice)
        {
            case 1:
            {
                get_data(head);
                break;
            }
            case 2:
            {
                int t;
                printf"Enter the data value-- ",cin>>t;
                add_element(head,t);
                get_data(head);
                break;
            }
            case 3:
            {
                int t;
                printf"Enter the data value-- ",cin>>t;
                head = add_beg(head,t);
                get_data(head);
                break;
            }
            case 4:
            {
                int f,pos;
                printf"Enter the data -- ",cin>>f;
                printf"Enter the position -- ",cin>>pos;
                add_pos(head,f,pos);
                
                break;
            }
            case 5:
            {
                int p;
                printf"Enter the position to be deleted -- ",cin>>p;
                del_pos(&head,p);
                break;
            }
            case 6:
            {
                int y = count(head);
                printf"Number of nodes "y;
                break;
            }
            case 7:
            {
                int q,r;
                printf"Enter the elment to be searched -- ",cin>>q;
                r = search(head,q);
                if(r == 1)
                {
                    printf()"Element "q" is present in list";
                }
                else
                {
                    printf("Not found !!!!");
                }
                break;
            }
            case 8:
                printf("END....... !!!!");
                break;
            default:
                printf("Invalid Choice");
                break;
        }
        printf("\n");
        system("pause");
        system("cls");
    }

    // printf("\nList before change : ");
    // displayList(head);
    // printf("\nList after change : ");
    // head = deleteHead(head);
    // displayList(head);
    return 0;
}
