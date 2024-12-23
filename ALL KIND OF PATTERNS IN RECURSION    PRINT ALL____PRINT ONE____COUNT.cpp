


//PRINTING SUBSEQUENCES WHOSE SUM IS K                                                
/*#include<bits/stdc++.h>
using namespace std;
void printf(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
{
	if(ind==n)
	{
		if(s==sum)
		{
		for(int i=0;i<ds.size();i++)
		{
			cout<<ds[i]<<" ";
		}
	    cout<<endl;
	    }
	    return;
	}
	//take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	s=s+arr[ind];
	
	printf(ind+1,ds,s,sum,arr,n);
	s=s-arr[ind];
	ds.pop_back();
	
	//not pick or not take condition, this element is not added to your subsequence
	printf(ind+1,ds,s,sum,arr,n);
}
int main()
{
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	vector<int> ds;
	printf(0,ds,0,sum,arr,n);
}*/





//PRINT ANY ONE SUBSEQUENCE WHOSE SUM IS GIVEN TO YOU (K)
/*#include<bits/stdc++.h>
using namespace std;
bool flag=false;
void printf(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
{
	if(ind==n)
	{
		if(s==sum && flag==false)
		{
		  flag=true;
		for(int i=0;i<ds.size();i++)
		{
			cout<<ds[i]<<" ";
		}
	    cout<<endl;
	    }
	    return;
	}
	//take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	s=s+arr[ind];
	
	printf(ind+1,ds,s,sum,arr,n);
	s=s-arr[ind];
	ds.pop_back();
	
	//not pick or not take condition, this element is not added to your subsequence
	printf(ind+1,ds,s,sum,arr,n);
}
int main()
{
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	vector<int> ds;
	printf(0,ds,0,sum,arr,n);
}*/



//ANOTHER METHOD FOR THIS QUESTION (PRINT ANY ONE SUBSEQUENCE WHOSE SUM IS GIVEN TO YOU (K))
/*#include<bits/stdc++.h>
using namespace std;
bool printf(int ind,vector<int> &ds,int s,int sum,int arr[],int n)
{
	if(ind==n)
	{
		//condition satisfied
		if(s==sum)
		{
		    for(int i=0;i<ds.size();i++)
		    {
			   cout<<ds[i]<<" ";
		    }
	        cout<<endl;
	        return true;
	    }
	    //condition not satisfied
	    else
	    {
	    	return false;
		}
	}
	//take or pick the particular index into the subsequence
	ds.push_back(arr[ind]);
	s=s+arr[ind];
	
	if(printf(ind+1,ds,s,sum,arr,n)==true)
	{
		return true;
	}
	s=s-arr[ind];
	ds.pop_back();
	
	//not pick or not take condition, this element is not added to your subsequence
	if(printf(ind+1,ds,s,sum,arr,n)==true)
	{
		return true;
	}
	
	return false;
}
int main()
{
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	vector<int> ds;
	printf(0,ds,0,sum,arr,n);
}
*/



//COUNT THE NUMBER OF SUBSEQUENCES WITH SUM K
/*#include<bits/stdc++.h>
using namespace std;
int printf(int ind,int s,int sum,int arr[],int n)
{
	//CONDITION NOT SATISFIED
	//.STRICTLY DONE IF ARRAY CONTAINS POSITIVES ONLY
	if(s>sum)
	{
		return 0;
	}
	if(ind==n)
	{
		//condition satisfied
		if(s==sum)
	        return 1;
	    //condition not satisfied
	    else
	    	return 0;
	}
	//take or pick the particular index into the subsequence
	s=s+arr[ind];
	
	int l=printf(ind+1,s,sum,arr,n);
	s=s-arr[ind];
	
	//not pick or not take condition, this element is not added to your subsequence
	int r=printf(ind+1,s,sum,arr,n);
	
	return l+r;
}
int main()
{
	int arr[]={1,2,1};
	int n=3;
	int sum=2;
	int total=printf(0,0,sum,arr,n);
	cout<<total;
}*/

