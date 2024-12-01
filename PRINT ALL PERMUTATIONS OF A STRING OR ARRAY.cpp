//FOR N THERE WILL BE N! PERMUTATIONS
//EXAMPLE FOR 3->3!->6
//[1,2,3] DISTINCT ARRAY
#include<bits/stdc++.h>
using namespace std;
void permutation(int ind,int a[],vector<int> &ds,int n,int hash[])
{
	if(ds.size()==n)
	{
		for(int i=0;i<ds.size();i++)
		{
			cout<<ds[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(hash[a[i]]==0)
		{
			ds.push_back(a[i]);
			hash[a[i]]=1;
			permutation(ind,a,ds,n,hash);
			ds.pop_back();
			hash[a[i]]=0;
		}
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
	int hash[n+1]={0};
	vector<int> ds;
	permutation(0,a,ds,n,hash);
	return 0;
}
/*TC IS O(N!*N)
SC IS O(N+N) DS,HASH*/
