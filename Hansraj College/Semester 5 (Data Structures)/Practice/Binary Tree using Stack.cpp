#include<iostream>
#include<stack>
#include<process.h>
using namespace std;
 
 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
 
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    };
};
 
Node* create()
{
    Node* root;
    int d;
    cout<<"Enter the value "<<endl,cin>>d;
    if(d == -1)
    {
        return NULL;
    }
    root = new Node(d);
    cout<<"Enter the left of "<<d<<endl;
    root->left = create();
    cout<<"Enter the right of "<<d<<endl;
    root->right = create();
    return root;
}
 
 
void preorder_it(struct Node* root)
{
    if(root == NULL)
    {
        return ;
    }
    stack <Node*> s;
    s.push(root);
    while(s.empty() == false)
    {
        struct Node * curr = s.top();
        cout<<curr->data<<" ";
        s.pop();
 
        if(curr->right)
        {
            s.push(curr->right);
        }
        if(curr->left)
        {
            s.push(curr->left);
        }
 
    }
}
 
void inorder_it(struct Node* root)
{
    stack <Node*> s;
    Node *curr = root;
 
    while((curr != NULL)||(s.empty() == false))
    {
        while(curr!=NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}
 
void postorder_it(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    stack <Node*>s1,s2;
    s1.push(root);
    Node* node;
 
    while(!s1.empty())
    {
        node = s1.top();
        s1.pop();
        s2.push(node);
 
        if(node->left)
        {
            s1.push(node->left);
        }
        if(node->right)
        {
            s1.push(node->right);
        }
 
    }
    while(!s2.empty())
    {
        node = s2.top();
        s2.pop();
        cout<<node->data<<" ";
    }
}
 
 
 
int main()
{  
    Node* root = create();
    cout<<"PREORDER TRAVERSAL"<<endl;
    preorder_it(root);
    cout<<"INORDER TRAVERSAL"<<endl;
    inorder_it(root);
    cout<<"POSTORDER TRAVERSAL"<<endl;
    postorder_it(root);
    return 0;
}
