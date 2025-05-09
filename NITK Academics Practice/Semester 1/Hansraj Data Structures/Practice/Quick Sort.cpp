#include <iostream>
using namespace std;

void get(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<"Enter the element "<<endl;
        cin>>a[i];
    }
}

void display(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
    	cout<<"Element "<<i+1<<" "<<a[i]<<endl;
    }   
}
void display_a(int a[],int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }  
    cout<<endl; 
}


int partition(int a[],int lb,int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            //////////////// here swap is inbuilt C++ function
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}


void quicksort(int a[],int lb, int ub)
{
    if(lb<ub)
    {
        int loc = partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
    }
}


int main()
{  
    int r;
    cout<<"enter the number of elements"<<endl;
    cin>>r;
    int a[r];
    get(a,r);
    display(a,r);
    quicksort(a,0,r-1);
    cout<<"Sorted Array"<<endl;
    display_a(a,r);
    return 0;
}
