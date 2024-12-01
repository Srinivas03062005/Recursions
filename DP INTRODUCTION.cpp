                    //1) TABULATION     ->  BOTTOM UP
                    //2) MEMOIZATION    ->  TOP DOWN
                    
    
//MEMOIZATION : WE TEND TO STORE THE VALUE OF SUBPROBLEMS IN SOME HASHING                				    
/*#include <bits/stdc++.h>
using namespace std;
int f(int n, vector<int>& dp)
{
    if(n<=1) return n;
    
    if(dp[n]!= -1) return dp[n];
    
    return dp[n]= f(n-1,dp) + f(n-2,dp);
}
int main() 
{
  int n=5;
  vector<int> dp(n+1,-1);
  cout<<f(n,dp)<<endl;
  for(int i=0;i<dp.size();i++)
  {
  	cout<<dp[i]<<" ";
  }
  return 0;
}*/

/*TC IS O(N)
SC IS O(N)+O(N)*/


/*RECURSION -> TABULATION(BOTTOM UP) 
    |                        |
  TOP DOWN             BASE CASE TO THE REQUIRED
	|
 REQUIRED ANSWER INDEX TO BASE CASE	
    |
 MEMOIZATION ALSO SAME
 */
 
 
//TABULATION
/*#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n=5;
  vector<int> dp(n+1,-1);
  dp[0]= 0;
  dp[1]= 1;
  for(int i=2; i<=n; i++)
  {
      dp[i] = dp[i-1]+ dp[i-2];
  }
  cout<<dp[n];
  return 0;
}*/			
/*TC IS O(N)
SC IS O(N)*/

//SPACE OPTIMIZED 
//DOTS EXAPMLE
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n=5;
  int prev2 = 0;
  int prev = 1;
  for(int i=2; i<=n; i++)
  {
      int cur_i = prev2+ prev;
      prev2 = prev;
      prev= cur_i;
  }
  cout<<prev;
  return 0;
}	

TC IS O(N)
SC IS O(1)

	       
