//subsequence=a contigious or non contigious sequence which follows the order is called subsequence
//sub array =contigious 

#include<bits/stdc++.h>
using namespace std;
void printf(int ind,int sum,int arr[],int n,vector<int> &ans)
{
	if(ind==n)
	{
		 ans.push_back(sum);
	     return;
	}
	//take or pick the particular index into the subsequence
	sum=sum+arr[ind];
	printf(ind+1,sum,arr,n,ans);
	sum=sum-arr[ind];
	
	//not pick or not take condition, this element is not added to your subsequence
	printf(ind+1,sum,arr,n,ans);
}
int main()
{
	int arr[]={3,1,2};
	int n=3;
	vector<int> ans;
	printf(0,0,arr,n,ans);
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}

/**** for n there will be 2^n subsets

Time Complexity: O(2^n)+O(2^n log(2^n)). Each index has two ways.
You can either pick it up or not pick it. 
So for n index time complexity for O(2^n) and for sorting it will take (2^n log(2^n)).

Space Complexity: O(2^n) for storing subset sums, since 2^n subsets can be generated for an array of size n.
*/

