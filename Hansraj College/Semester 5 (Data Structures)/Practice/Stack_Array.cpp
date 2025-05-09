
#include <iostream>
using namespace std;

class stack
{
    int *ptr;
    int max;
    int arr_size;
 
    ///  this is ptr which is pointer to the array which is intially at 0 index shown by arr_size and max capacity of g
    public:
    stack(int g)
    {
        ptr = new int[g];
        max = g;
        arr_size =0;
    }
 
 
    void push(int y)
    {
        if(arr_size == max)
        {
            cout<<"Cannot push Stack is full"<<endl;
            return;
        }
        ptr[arr_size] = y;
        arr_size++;
    }
 
    void pop()
    {
        if(arr_size == 0)
        {
            cout<<"Cannot Pop Stack is empty"<<endl;
        }
        arr_size--;
    }
 
    int top()
    {
        if(arr_size == 0)
        {
            cout<<"No Top element"<<endl;
            return -1;
        }
        return ptr[arr_size-1];
    }

    int size()
    {
        return arr_size;
    }
 
    bool isempty()
    {
        if(arr_size == 0)
        {
            return true;
        }
        return false;
    }
    bool isfull()
    {
        if(arr_size == max)
        {
            return true;
        }
        return false;
    }
 
    int peek(int p)
    {
        if(p-1>=arr_size)
        {
            cout<<"Peek index is out of range"<<endl;
            return -1;
        }
        else if(p== 0)
        {
            return ptr[0];
        }
        return ptr[p-1];
    }
 
    int max_size()
    {
        return max;
    }
    void display()
    {
        for(int i = 0;i<arr_size;i++)
        {
            cout<<ptr[i]<<" ";
        }
    }
};
 
 
int main()
{
    int n;
    cout<<"Enter the max size of array "<<endl,cin>>n;
    stack s(n);
    int ch;
    while(ch!= 9)
    {
        cout<<"1. Push peration"<<endl;
        cout<<"2. Pop operation"<<endl;
        cout<<"3. Top operation"<<endl;
        cout<<"4. Peek operation"<<endl;
        cout<<"5. Display opertaion"<<endl;
        cout<<"6. Check for empty stack"<<endl;
        cout<<"7. Check for full stack"<<endl;
        cout<<"8. Size of stack"<<endl;
        cout<<"9. Exit"<<endl;
        cout<<endl<<"Enter the operation you want to perform"<<endl,cin>>ch;
        cout<<endl;
        switch(ch)
        {
            case 1:
            {
                int x;
                cout<<"Enter the number you want to push into stack "<<endl,cin>>x;
                s.push(x);
                break;
            }
            case 2:
            {
                s.pop();
                s.display();
                break;
            }
            case 3:
            {
                cout<<"Element at top is "<<s.top()<<endl;
                break;
            }
            case 4:
            {
                s.display();
                int r;
                cout<<"Enter the index which you want to peek "<<endl,cin>>r;
                if((r == 0)&(s.isempty() == true))
                {
                    cout<<"Empty stack no peek"<<endl;
                }
                else{cout<<endl<<s.peek(r);}
                break;
            }
            case 5:
            {
                s.display();
                break;
            }
            case 6:
            {
                cout<<s.isempty();
                break;
            }
            case 7:
            {
                cout<<s.isfull();
                break;
            }
            case 8:
            {
                int t;
                cout<<"Enter the option---- Max size(1) or current size(2)"<<endl,cin>>t;
                if(t == 1)
                {
                    cout<<"MAx size "<<s.max_size()<<endl;
                }
                else if(t ==2)
                {
                    cout<<"Size of stack is "<<s.size()<<endl;
                }
                else
                {
                    cout<<"Invalid Choice"<<endl;
                }
                break;
            }
            case 9:
            {
                cout<<"END....... !!!!";
                break;
            }        
            default:
                cout<<"Invalid Choice";
                break;
        }
        cout<<"\n"<<endl;
        system("pause");
        system("cls");
 
    }
    return 0;
}