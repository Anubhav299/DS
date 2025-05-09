// // C++ program to Convert a String
// // to a Singly Linked List

#include <iostream>
using namespace std;

// // Structure for a Singly Linked List
// struct node {
// 	char data;
// 	node* next;
// };

// // Function to add a new node to the Linked List
// node* add(char data)
// {
// 	node* newnode = new node;
// 	newnode->data = data;
// 	newnode->next = NULL;
// 	return newnode;
// }

// // Function to convert the string to Linked List.
// node* string_to_SLL(string text, node* head)
// {
// 	head = add(text[0]);
// 	node* curr = head;

// 	// curr pointer points to the current node
// 	// where the insertion should take place
// 	for (int i = 1; i < text.size(); i++) {
// 		curr->next = add(text[i]);
// 		curr = curr->next;
// 	}
// 	return head;
// }

// // Function to print the data present in all the nodes
// void print(node* head)
// {
// 	node* curr = head;
// 	while (curr != NULL) {
// 		cout << curr->data <<"  ";
// 		curr = curr->next;
// 	}
// }

// struct node* reverse(struct node *head)
// {
//     struct node*prev = NULL;
//     struct node*next = NULL;
//     while(head != NULL)
//     {
//         next = head->next;
//         head->next = prev;
//         prev = head;
//         head = next;
//     }
//     head = prev;
//     return head;

// }


// int main()
// {
// 	string text;
// 	cout<<"Enter String - ";
// 	cin>>text;
// 	node* head = NULL;
// 	head = string_to_SLL(text, head);
// 	print(head);

// 	cout<<endl<<"Reverse of the string is "<<endl;
// 	head = reverse(head);
// 	print(head);
// 	return 0;
// }

#include<iostream>
using namespace std;
#include<stack>
#include<string.h>
 
/////////////////////////// TO EVALUATE POSTFIX EXPRESSION /////////////////
 
bool oper(char c)
{
    if((c == '+') || (c == '-')|| (c == '*')|| (c=='/')||(c=='^'))
    {
        return true;
    }
    return false;
}
 
int cal(int y,int c1,int c2)
{
    if(y == 42)
    {
        return c2*c1;
    }
    else if(y==43)
    {
        return c2+c1;
    }
    else if(y==47)
    {
        return c2/c1;
    }
    else if(y == 45)
    {
        return c2-c1;
    }
    else
    {
        return c2^c1;
    }
}


int postfix(stack <int> s, string post)
{
    int n =post.length();
    for(int i = 0;i<n;i++)
    {
        if((int(post[i])>=48) && (int(post[i])<=57 ))
        {
            int x = (int(post[i])-48);
            s.push(x);
        }
        else if(oper(post[i]))
        {
            int y = int(post[i]);
            if(s.size()>=2)
            {
                int c1,c2;
                c1 = s.top();
                s.pop();
                c2 = s.top();
                s.pop();
                int r = cal(y,c1,c2);
                s.push(r);
            }
        }
    }
    return s.top();
}
 
 
int main()
{  
    string post;
    cout<<"Enter the postfix Expression "<<endl;
    cin>>post;
    stack <int> s;
    int res = postfix(s, post);
    cout<<"Answer is "<<res<<endl;
    return 0;
}
