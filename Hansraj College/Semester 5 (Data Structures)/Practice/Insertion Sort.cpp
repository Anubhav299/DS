#include <iostream>
using namespace std;

void display(int a[],int m)
{
	cout<<"The Elements you've entered are - "<<endl;
	for(int q=0;q<m;q++)
	{
		cout<<a[q];
	}
}

void Insertion(int a[],int p)
{
	cout<<"INSERTION SORT"<<endl;
    int curr;
    for(int i=1;i<p;i++)
    {
        curr = a[i];
        int j = i-1;
        while((j>=0) &&(a[j]>curr))
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = curr;
    }
}

int main()
{
	int n;
	int arr[n];
	cout<<"Enter the number of elements you want - ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter Element"<<endl;
		cin>>arr[i];
	}
	display(arr,n);
	cout<<endl;
    
    Insertion(arr,n);
    display(arr,n);
	return 0;
};
