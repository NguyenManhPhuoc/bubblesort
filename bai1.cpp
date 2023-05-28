#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n = "; cin>>n;
	int arr[n];
	cout<<"Nhap mang: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=n-1;i>=1;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j]<=arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	cout<<"Mang sau khi sap xep: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
return 0;
}
	
