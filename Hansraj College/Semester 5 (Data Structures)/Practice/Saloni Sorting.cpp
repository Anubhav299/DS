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


int search(int a[],int n,int x)
{
    int p = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i] == x)
        {
            p = 1;
        }
    }
    return p;
}

void swap(int a,int b)
{
    int temp;
    temp = b;
    a = b;
    b=temp;
}

void selectionsort(int a[],int n)
{
    cout<<"SELECTION SORT"<<endl;
    display_a(a,n);
    int min = 0,temp = 0;
    for(int i = 0;i<n-1;i++)
    {
        min = i;
        for(int j = i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
        display_a(a,n);
    }
}

void bubble(int a[],int n)
{
    cout<<"BUBBLE SORT"<<endl;
    display_a(a,n);
    cout<<endl;
    for(int i = 0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp;
			    temp = a[j];
			    a[j] = a[i];
			    a[i]=temp;
            }
        }
        display_a(a,n);
    }
}

void insertion(int a[],int n)
{
    cout<<"INSERTION SORT"<<endl;
    display_a(a,n);
    int temp;
    for(int i =1;i<n;i++)
    {
        temp = a[i];
        int j = i-1;
        while((j>=0) &&(a[j]>temp))
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
        display_a(a,n);
    }
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
            swap(a[start],a[end]);
        }

    }
    swap(a[lb],a[end]);
    display_a(a,ub+1);
    return end;
}

int partition_2(int a[],int start,int end)
{
    int i = start+1;
    int piv = a[start];
    for(int j = start+1;j<=end;j++)
    {
        if(a[j]<piv)
        {
            swap(a[i],a[j]);
            i = i+1;
        }
    }
    swap(a[start],a[i-1]);
    display_a(a,5);
    return i-1;
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

int check_sort(int a[],int n)
{
    int d = 0;
    for(int i = 0;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            d = 1;
        }
    }
    return d;
}

int binary(int a[],int n,int x)
{
    int p = check_sort(a,n);
    if(p==0)
    {
        int l = 0,h= n;
        while(l<=h)
        {
            int mid = (l+h)/2;
            if(a[mid] == x)
            {
                return mid;
            }
            else if(a[mid]<x)
            {
                l = mid+1;
            }
            else if(a[mid]>x)
            {
                h = mid-1;
            }
        }
        return -1;
    }
    else
    {
        cout<<"Array is not sorted "<<endl;
        return -1;
    }

}

int main()
{  
     int n;
     cout<<"Enter the number of elements -- "<<endl,cin>>n;
     int a[n];
     get(a,n);
     display(a,n);
//     selectionsort(a,n);
//     bubble(a,n);
//     insertion(a,n);
	//int b[6] ={4,2,6,9,1,5};
    // quicksort(b,0,5);
    // selectionsort(b,6);
//    int k= binary(b,6,2);
//    if(k== -1)
//    {
//        cout<<"Element not found "<<endl;
//    }
//    else
//    {
//        cout<<"Found at "<<k<<endl;
//    }

    return 0;
    }
