#include <stdio.h>
#include <stdlib.h>

// Define the structure for the linked list node
struct ListNode
{
    int val;
    struct ListNode *next;
};

// Function to create a new node
struct ListNode *create_node(int val)
{
    struct ListNode *new_node = (struct ListNode *)malloc(sizeof(struct ListNode));
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

// Function to print the linked list
void print_list(struct ListNode *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to perform selection sort on the linked list
void selection_sort(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
    {
        return; // List is empty or has only one element, no need to sort
    }

    struct ListNode *i;
    struct ListNode *j;

    // Traverse the entire list
    for (i = head; i!=NULL;i=i->next)
    {
        for (j = i->next; j != NULL;j=j->next)
        {
            if(i->val > j->val)
            {
                int temp = i->val;
                i->val = j->val;
                j->val = temp;
            }
        }
    }
}

// Driver code
int main()
{
    // Create a linked list: 4 -> 2 -> 1 -> 3
    struct ListNode *head = create_node(7);
    head->next = create_node(1);
    head->next->next = create_node(5);
    head->next->next->next = create_node(6);

    printf("Original List: \n");
    print_list(head);

    // Sort the list using selection sort
    selection_sort(head);

    printf("\nSorted List: \n");
    print_list(head);

    return 0;
}
