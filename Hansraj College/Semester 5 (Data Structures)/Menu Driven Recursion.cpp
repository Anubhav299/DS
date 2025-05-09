#include <iostream>
#include <stdlib.h>
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
    //The new operator is an operator which denotes a request for memory allocation on the Heap. 
	//If sufficient memory is available, new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.
    cout<<"Left for "<<d<<endl;
    root->left = buildtree();
    cout<<"Right for "<<d<<endl;
    root->right = buildtree();
    return root;
}

int factorial(int n1)
{
	if(n1==0)
	{
		return 1;
	}
	else 
		return n1 * factorial(n1-1);
	
}

int power(int bs, int p)
{
    if (p != 0)
    {
	    return (bs*power(bs, p-1));
	}
    else
        return 1;
}

int Fibonacci(int no)
{
	if(no==0)
	{
		return 0;
	}
	if(no==1||no==2)
	{
		return 1;
	}
	return Fibonacci(no-1)+Fibonacci(no-2);
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


int main()
{
Node*root=buildtree();
int ch=0;
while (ch!=7)
{
	cout<<endl<<"\n";
	cout<<"========= Menu =========";
	cout<<endl<<"||1. Factorial.";
	cout<<endl<<"||2. Power.";
	cout<<endl<<"||3. Fibonacci.";
	cout<<endl<<"||4. Preorder.";
	cout<<endl<<"||5. Inorder.";
	cout<<endl<<"||6. Postorder.";	
	cout<<endl<<"||7. Exit.";
	cout<<endl<<"========================\n";
	cout<<endl<<"-----Enter Your Choice: ";

	cin>>ch;
	system("CLS");
	switch(ch)
	{
  	case 1:
  	int n1;
		cout<<"Enter Number : ";
		cin>>n1;
		cout<<"Output :"<<factorial(n1);
       	break;
    case 2:
    	int x,n;
    	cout<<"Enter X."<<endl;
    	cin>>x;
    	cout<<endl<<"Enter n."<<endl;
    	cin>>n;
    	cout<<"Output : "<<power(x,n);
    	break;
    case 3:
    	int no;
    	cout<<"Enter Value of N."<<endl;
    	cin>>no;
    	cout<<"Output : "<<Fibonacci(no);
    	break;
    case 4:
        preorder(root);
        break;
    case 5:
        inorder(root);
        break;
    case 6:
        postorder(root);
        break;
    	
	default:
		cout<<"Invalid Choice!\n";
      	cout<<"Please choose a Valid Number.";
      	break;
	}
	cout<<endl;
	system("pause");
	system("CLS");
}
return 0;
}

