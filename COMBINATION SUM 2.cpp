#include<bits/stdc++.h>
using namespace std;
void subsetsum2(int ind,vector<int> &ds,int arr[],int n,int target)
{
  if(target==0)
 {
	for(int i=0;i<ds.size();i++)
	{
	     cout<<ds[i]<<" ";
	}
	cout<<endl;
 }
	for(int i=ind;i<n;i++)
	{
		if(i!=ind && arr[i]==arr[i-1])
		{
			continue;
		}
		ds.push_back(arr[i]);
		subsetsum2(i+1,ds,arr,n,target-arr[i]);
		ds.pop_back();
	}
}
int main()
{
	int n,target;
	cin>>n>>target;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	vector<int> ds;
	subsetsum2(0,ds,a,n,target);
	return 0;
}
