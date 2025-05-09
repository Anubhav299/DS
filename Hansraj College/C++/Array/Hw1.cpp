// Practise list 5: C++ Menu based program 
// Create a single dimension array from numbers entered by the user and implement the following using functions: 
// 1. Calculate and print the sum and average of the elements of array. 
// 2. Print the maximum and minimum element of array along with its position. 
// 3. Make a new array and store the Reverse of the original array and print the reversed array. 
// 4. Print the even-valued elements. 
// 5. Print the odd-valued elements. 
// 6. Determine if each element of the array is prime. 
// 7. Take an element from the user and search the element in the array. If found print position else print “Not found”. 

#include <iostream>
using namespace std;
void sum_average(int [],int);
void max_min(int [],int);
void reverse(int [],int);
void even_v(int[],int);
void odd_v(int[],int);
void prime(int);
void search(int[],int,int);

int main()
{
int ch,n;
cout<<"Enter Number of Terms : ";
cin>>n;
int arr[n];
	for(int i =0;i<n;i++)
	{
		cout<<"Enter Element No. " << i+1 <<" : ";
		cin>>arr[i];
	}
while (ch!=8)
{
	cout<<endl<<"\n";
	cout<<"========= Menu =========";
	cout<<endl<<"||1. Calculate and print the sum and average of the elements of array. ";
	cout<<endl<<"||2. Print the maximum and minimum element of array along with its position. ";
	cout<<endl<<"||3. Make a new array and store the Reverse of the original array and print the reversed array.";
	cout<<endl<<"||4. Print the even-valued elements. ";
	cout<<endl<<"||5. Print the odd-valued elements. ";
	cout<<endl<<"||6. Determine if each element of the array is prime.";
	cout<<endl<<"||7. Take an element from the user and search the element in the array. If found print position else print Not found.";	
	cout<<endl<<"||8. Exit.";
	cout<<endl<<"========================\n";
	cout<<endl<<"-----Enter Your Choice: ";
	
	cin>>ch;
	system("CLS");
	switch(ch)
	{
  		case 1:
			sum_average(arr,n);
			break;
		
		case 2:
			max_min(arr,n);
			break;
		
		case 3:
			cout<<"Original Array"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<arr[i]<<" ";
			}
			reverse(arr,n);
			break;
			
		case 4:
			even_v(arr,n);
			break;
		
		case 5:
			odd_v(arr,n);
			break;
		
		case 6:
			for (int i=0;i<n;i++)
			{
				prime(arr[i]);
			}
			break;
			
		case 7:
			int s;
			cout<<"Enter Element to be searched : ";
			cin>>s;
			search(arr,n,s);
			break;	
					
		case 8:
      		cout<<"Bye!!";
      		break;
      	
  		default:
      		cout<<"Invalid Choice!\n";
      		cout<<"Please choose a Valid Number.";
      		break;
	}
system("pause");
system("CLS");
cout<<"Original Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
return 0;
}

void sum_average(int arr[],int nt)
{
	float s = 0.0,av=0.0;
	for(int i=0;i<nt;i++)
	{
		s+=arr[i];
	}
	av = s/nt;
	cout<<"Sum of elements is : " << s << endl;
	cout<<"Average is : " << av << endl;
}
void max_min(int arr[],int nt)
{
	int j=0,k=0,max = 0,min = arr[0];
	for(int i=0;i<nt;i++)
	{
	if(arr[i]>max)
	{
		max=arr[i];
		j=i+1;
	}
	if(arr[i]<min)
	{
		min=arr[i];
		k=i+1;
	}
	}
	cout<<"Maximum Element in Array : " << max << " at position : " <<j << endl;
	cout<<"Minimum Element in Array : " << min << " at position : " <<k << endl; 
}
void reverse(int arr[],int nt)
{
	cout<<"\n Reversed Array is : "<<endl;
	int rev[nt],j=0;
	for(int i=0;i<nt;i++)
	{
		rev[i]=arr[nt-i-1];
	}
	for(j=0;j<nt;j++)
	{
		cout<<rev[j]<<" ";
	}
}
void even_v(int arr[],int nt)
{
	cout<<"Even Elements are : "<<endl;
	for(int i=0;i<nt;i++)
	{
		if(arr[i]%2==0)
			cout<<arr[i]<<endl;
	}
}
void odd_v(int arr[],int nt)
{
	cout<<"Odd Elements are : "<<endl;
	for(int i=0;i<nt;i++)
	{
		if(arr[i]%2!=0)
			cout<<arr[i]<<endl;
	}
}
void prime(int n)
{
	int i=2, flag=0;
	if (n<=1)
	cout << n << " is neither Prime nor Composite."<<endl;
	else
	{
	while ((i<= n/2) && (flag == 0))
	{
		if (n%i==0)
		{
			flag = 1;
		}
		i = i+1;
 	}
 	if (flag == 0)
	cout<< n << " is a Prime Number"<<endl;
	else if (flag>0)
	cout<< n <<  " is a Composite Number"<<endl;}
}

void search(int arr[],int nt,int s)
{
	int flag = 0,pos=0;
	for(int i=0; i<nt; i++)
    {
        if((arr[i]==s) && (flag==0) )
        {
                pos=i+1;
                flag=1;
        }
    }
    if(flag == 0)
    {
        cout<<"\n Element Not Found."<<endl;
    }
    else
    {
        cout<<"\n Element : "<< s <<" ,Found At Position "<<pos<<endl;
    }	
}

