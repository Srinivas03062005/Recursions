//APPROACH 2
#include<bits/stdc++.h>
using namespace std;
void permutation(int ind,int a[],int n)
{
	if(ind==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=ind;i<n;i++)
	{
		swap(a[i],a[ind]);
		permutation(ind+1,a,n);
		swap(a[i],a[ind]);
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
	permutation(0,a,n);
	return 0;
}
/*
TC IS O(N!*N)
SC IS O(1)*/

