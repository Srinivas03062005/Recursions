//subsequence=a contigious or non contigious sequence which follows the order is called subsequence
//sub array =contigious 


#include<bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int> &ds,int arr[],int n)
{
	if(ind==n)
	{
		for(int i=0;i<ds.size();i++)
		{
			cout<<ds[i]<<" ";
		}
		if(ds.size()==0)
	    {
	    	cout<<"{}";
	    }
	       cout<<endl;
	       return;
	}
	//take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	printf(ind+1,ds,arr,n);
	ds.pop_back();
	
	//not pick or not take condition, this element is not added to your subsequence
	printf(ind+1,ds,arr,n);
}
int main()
{
	int arr[]={3,0,2,1,1};
	int n=5;
	vector<int> ds;
	printf(0,ds,arr,n);
}
/*TC IS O((2^N)*N)
SC IS O(N) BCZ MAXIMUM WAITING FUNCTIONS ARE N ONLY */





//REVERSE LO FIRST    NOT PICK AFTER PICK

/*#include<bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int> &ds,int arr[],int n)
{
	if(ind==n)
	{
		for(int i=0;i<ds.size();i++)
		{
			cout<<ds[i]<<" ";
		}
		if(ds.size()==0)
	    {
	    	cout<<"{}";
	    }
	       cout<<endl;
	       return;
	}
	//not pick or not take condition, this element is not added to your subsequence
	printf(ind+1,ds,arr,n);
	
	//take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	printf(ind+1,ds,arr,n);
	ds.pop_back();
	
}
int main()
{
	int arr[]={3,1,2};
	int n=3;
	vector<int> ds;
	printf(0,ds,arr,n);
}*/


