#include<iostream>
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


void merge(int a[],int lb,int mid ,int ub)
{
    int i =lb;
    int j = mid+1;
    int k = lb;
    int b[ub-lb];
    while((i<=mid) && (j<=ub))
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
   
    ///////// To add the left over elements
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
    for(k = lb;k<=ub;k++)
    {
        a[k] = b[k];
    }

}

void mergesort(int a[],int lb, int ub)
{
    if(lb<ub)
    {
        int mid = (lb+ub)/2;
        mergesort(a,lb,mid); 
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub); 
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
    mergesort(a,0,r-1);
    display_a(a,r);
    return 0;
}
