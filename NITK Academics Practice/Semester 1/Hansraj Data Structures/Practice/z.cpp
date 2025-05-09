#include <iostream>
using namespace std;
void insertion(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int curr=a[i];
		int j=i-1;
		while((j>=0)&&(a[j]>curr))
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=curr;
	}
}

int main()
{
	int n;
	int arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	insertion(arr,n);
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
