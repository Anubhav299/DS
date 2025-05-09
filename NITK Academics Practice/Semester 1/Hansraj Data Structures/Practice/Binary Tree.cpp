#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
 
    ///// Constructor in Structure
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 
 
Node *create()
{
    Node *root;
    int d;
    cout << "Enter the element " << endl, cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    root = new Node(d);
    cout << "Enter left for " << d << endl;
    root->left = create();
    cout << "Enter right for " << d << endl;
    root->right = create();
    return root;
}
 
void preorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
 
void inorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
 
void postorder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node*root)  // distance from root node to last node
{
    if(root == NULL)
    {
        return 0;
    }
    int l = height(root->left);// to calculate height of left subtree
    int r = height(root->right);//to calculate height of right subtree
    return max(l,r)+1;// 1 is addded to add the current node level
}
 

// Diameter

int Diameter(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    int dia = l+r+1;
    int ldia = Diameter(root->left);
    int rdia = Diameter(root->right);
    return max(dia,max(ldia,rdia));
}

// Leaves
int count(Node* root)
{
    if(root ==  NULL)
    {
        return 0;
    }
    if(root->left == NULL and root->right == NULL)
    {
        return 1;
    }
    else
    return count(root->left)+count(root->right);
}

// No of nodes
 
int count_node(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return (1+ count_node(root->left)+count_node(root->right));
}
 
int main()
{
    Node *root = create();
 
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    cout<<Diameter(root);
    cout<<endl;
    cout<<count(root);
    cout<<endl;
    cout<<count_node(root);
    cout<<endl;

    return 0;
}

// Height of tree
 

