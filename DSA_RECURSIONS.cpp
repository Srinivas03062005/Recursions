
                                    /*INTRODUCTION TO RECURSION TOPICS
             
RECURSION : WHEN A FUNCTION CALLS ITSELF UNTIL A SPECIFIED CONDITION IS MET

*** NO BASE CONDITION->INFINITE-> STACK OVERFLOW->SEGMENTATION FAULT

*** IF WE WRITE A RETURN STATEMENT INSIDE A FUNCTION THEN THE FUNCITON TERMINATED*/


                                         //PROBLEMS ON RECURSION 


//PRINT NAME N TIMES
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
	if(i>n)
	{
		return;
	}
	else
	{
		cout<<"srinivas"<<endl;
		func(i+1,n);
	}
}
signed main()
{
    int n;
    cin>>n;
    func(1,n);
    return 0;
}
// TC IS O(N)
// SC IS O(N)
*/


//PRINT 1 TO N NUMBERS
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
	if(i>n)
	{
		return;
	}
	else
	{
		cout<<i<<endl;
		func(i+1,n);
	}
}
signed main()
{
    int n;
    cin>>n;
    func(1,n);
    return 0;
}
// TC IS O(N)
// SC IS O(N)
*/


//PRINT N TO 1 NUMBERS
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
	if(i<1)
	{
		return;
	}
	else
	{
		cout<<i<<endl;
		func(i-1,n);
	}
}
signed main()
{
    int n;
    cin>>n;
    func(n,n);
    return 0;
}
// TC IS O(N)
// SC IS O(N)
*/


//PRINT FROM 1 TO N NUMBERS USING BACKTRACKING
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
	if(i<1)
	{
		return;
	}
	else
	{
		func(i-1,n);
		cout<<i<<endl;
	}
}
signed main()
{
    int n;
    cin>>n;
    func(n,n);
    return 0;
}
*/

//PRINT FROM N TO 1 NUMBERS USING BACKTRACKING
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int n)
{
	if(i>n)
	{
		return;
	}
	else
	{
		func(i+1,n);
		cout<<i<<endl;
	}
}
signed main()
{
    int n;
    cin>>n;
    func(1,n);
    return 0;
}
*/

                                  //PARAMETERISED AND FUNCTIONAL RECURSION

// SUMMATION OF FIRST N NUMBERS
// PARAMETERISED WAY
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int sum)  //PARAMETERS
{
	if(i<1)
	{
		cout<<sum;
		return;
	}
	else
	{
		func(i-1,sum+i);
	}
}
signed main()
{
    int n;
    cin>>n;
    func(n,0); // PASSING ARGUMENTS
    return 0;
}*/



// SUMMATION OF FIRST N NUMBERS
// FUNCTIONAL WAY
/*#include<bits/stdc++.h>
using namespace std;
int func(int n)  
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+func(n-1);
	}
}
signed main()
{
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}*/



// FACTORIAL
// FUNCTIONAL
/*#include<bits/stdc++.h>
using namespace std;
int func(int n)  
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*func(n-1);
	}
}
signed main()
{
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}*/

                                         //PROBLEMS ON FUNCTIONAL RECURSIONS

//REVERSE AN ARRAY USING TWO POINTERS
/*#include<bits/stdc++.h>
using namespace std;
void func(int l,int r,int arr[],int n)  
{
	if(l>=r)
	{
		return;
	}
	else
	{
		swap(arr[l],arr[r]);
		func(l+1,r-1,arr,n);
	}
}
signed main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	func(0,n-1,arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
    return 0;
}*/


//REVERSE AN ARRAY USING SINGLE VARIABLE
/*#include<bits/stdc++.h>
using namespace std;
void func(int i,int arr[],int n)  
{
	if(i>=n/2)
	{
		return;
	}
	else
	{
		swap(arr[i],arr[n-i-1]);
		func(i+1,arr,n);
	}
}
signed main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	func(0,arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
    return 0;
}*/



//STRING PALINDROME OR NOT
/*#include<bits/stdc++.h>
using namespace std;
bool func(int i,string s)
{
	if(i>=s.size()/2)
	{
		return true;
	}
	else if(s[i]!=s[s.size()-i-1])
	{
		return false;
	}
	else
	{
		return func(i+1,s);
	}
}
signed main()
{
    string s;
    cin>>s;
    cout<<func(0,s);
    return 0;
}*/

                                     //MULTIPLE RECURSION CALLS

// FIBONACCI
//TIME COMPLEXITY IS NEARLY 2 POWER N IT CAN BE TRIM DOWN 
//USING DYNAMIC PROGRAMMING
//FIRST COUPLE OF NUMBERS ARE 0 AND 1
//0     1     1     2     3     5    8    13    21 
//0TH   1ST   2ND   3RD   4TH   5TH  6TH  7TH   8TH
/*#include<bits/stdc++.h>
using namespace std;
int func(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		int last=func(n-1);
		int slast=func(n-2);
		return last+slast;
	}
}
signed main()
{
    int n;
    cin>>n;
    cout<<func(n);
    return 0;
}

ITERATIVE VERSION PSEUDO CODE
 F[0]=0,F[1]=1
 FOR(INT I=2;I<=N;I++)
 {
       F[I]=F[I-1]+F[I-2];
 }
*/




