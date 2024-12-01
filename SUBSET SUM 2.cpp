#include<bits/stdc++.h>
using namespace std;
void subsetsum2(int ind,vector<int> &ds,int arr[],int n)
{
	cout<<"[ ";
	for(int i=0;i<ds.size();i++)
	{
	     cout<<ds[i]<<" ";
	}
	cout<<']';
	cout<<endl;
	for(int i=ind;i<n;i++)
	{
		if(i!=ind && arr[i]==arr[i-1])
		{
			continue;
		}
		ds.push_back(arr[i]);
		subsetsum2(i+1,ds,arr, n);
		ds.pop_back();
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	vector<int> ds;
	subsetsum2(0,ds,a,n);
	return 0;
}
