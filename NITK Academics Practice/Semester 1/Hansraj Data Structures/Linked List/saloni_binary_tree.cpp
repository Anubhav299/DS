#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    // Parameterised Constructor
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};


Node* buildtree()
{
    cout<<"Enter element "<<endl;
    int d;
    cin>>d;
    // object root of class Node is made 
    if(d==-1)
    {
        return NULL;
    }
    Node* root = new Node(d);
    //The new operator is an operator which denotes a request for memory allocation on the Heap. If sufficient memory is available, new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.
    cout<<"Left for "<<d<<endl;
    root->left = buildtree();
    cout<<"Right for "<<d<<endl;
    root->right = buildtree();
    return root;
}


void preorder(struct Node* root)
{
    if(root == NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node* root)
{
    if(root == NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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

int count_node(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return (1+ count_node(root->left)+count_node(root->right));
}

void print(Node*root){
  if(root==NULL){
    return;
  }
  cout<<root->data<<" ";
  print(root->left);
  print(root->right);
}


int main()
{
  Node*root=buildtree();
  int ch;
  while(ch!= 7)
  {
      cout<<"1. Preorder"<<endl;
      cout<<"2. Inorder"<<endl;
      cout<<"3. Post Order"<<endl;
      cout<<"4. Height of tree"<<endl;
      cout<<"5. Leaves in binary tree"<<endl;
      cout<<"6. Total no. of nodes"<<endl;
      cout<<"7. Exit"<<endl;
      cout<<"Enter your Choice "<<endl,cin>>ch;
      switch(ch)
      {
          case 1:
          {
              preorder(root);
              break;
          }
          case 2:
          {
              inorder(root);
              break;
          }
          case 3:
          {
              postorder(root);
              break;
          }
          case 4:
          {
            cout<<"Height "<<height(root);
            break;
          }
          case 5:
          {
            cout<<"Leaves "<<count(root);
            break;
          }
          case 6:
          {
            cout<<count_node(root);
            break;
          }

          case 7:
              cout<<"END....... !!!!";
              break;
          default:
              cout<<"Invalid Choice";
              break;
      }
      cout<<"\n"<<endl;
      system("pause");
      system("cls");
  }

}
