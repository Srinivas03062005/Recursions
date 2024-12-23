/*[2 3 6 7] TARGET = 7
UNIQUE ARRAY 
WE CAN USE ANY NUMBER ANY NUMBER OF TIMES
POSSIBLE COMBINATIONS ARE [2 2 3] [7]
 *** U CAN ALSO STOP RECURSION WHEN TARGET BECOMES 0*/
#include<bits/stdc++.h>
using namespace std;
void combination(int ind,vector<int> &ds,int target,int arr[],int n)
{
	if(ind==n)
	{
		if(target==0)
		{
			for(int i=0;i<ds.size();i++)
			{
				cout<<ds[i]<<" "; 
			}
			cout<<endl;
		}
		return; 
	}
	//PICK 
	if(arr[ind]<=target)
	{
		ds.push_back(arr[ind]);
	    combination(ind,ds,target-arr[ind],arr,n);
	    ds.pop_back();
	}
	//NOT PICK
	combination(ind+1,ds,target,arr,n);
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
	vector<int> ds;
	combination(0,ds,target,a,n);
	return 0;
}
//TC IS O((2^TARGET)*K(AVERAGE SIZE OF THE COMBINATION))

