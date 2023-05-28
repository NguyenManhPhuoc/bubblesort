#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int arr[10][10];
	cout<<"n = "; cin>>n;
	cout<<"m = "; cin>>m;
	cout<<"Nhap ma tran: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int sum=0;
	cout<<"Tong cac so le la: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j] % 2 != 0)
			sum+= arr[i][j];
		}
	}
		cout<<sum;
return 0;
}	
