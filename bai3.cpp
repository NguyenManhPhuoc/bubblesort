#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,sum;
	int arr1[10][10],arr2[10][10];
	cout<<"n = "; cin>>n;
	cout<<"m = "; cin>>m;
	cout<<"Nhap ma tran 1: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		cin>>arr1[i][j];
		}
	}
	cout<<"Nhap ma tran 2:"<<endl;
	for(int l=0;l<n;l++)
	{
		for(int k=0;k<m;k++)
		{
		cin>>arr2[l][k];
		}
	}
	cout<<"Tong 2 ma tran:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			sum=arr1[i][j]+ arr2[i][j];
			cout<<sum<<" ";
		}
		cout<<endl;
	}
return 0;
}
		
	
