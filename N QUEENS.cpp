

/*
-> A QUEEN CAN ATTACK IN 8 DIRECTIONS TOP,DOWN,LEFT,RIGHT,TOPRIGHT,TOPLEFT,DOWNLEFT,DOWNRIGHT
->EVERY ROW SHOULD CONTAIN 1 QUEEN
->EVERY COLUMN SHOULD CONTAIN 1 QUEEN
->NONE OF THE QUEENS ATTACK EACH OTHER


N=4 QUEENS

-Q--
---Q
Q---
--Q-
ALL RULES SATISFIED
*/


#include <bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    bool isSafe1(int row, int col, vector < string > board, int n) 
	{
      // check upper element
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) 
	  {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) 
	  {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) 
	  {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }

  public:
    void solve(int col, vector < string > & board, vector < vector < string >> & ans, int n) 
    {
      if (col == n) 
	  {
        ans.push_back(board);
        return;
        /*
         The return statement is used to stop further execution 
		 of the current function call and return control to the 
		 previous recursive call (or to the point where the function
		 was originally called).
        */
      }
      for (int row = 0; row < n; row++) 
	  {
        if (isSafe1(row, col, board, n)) 
		{
          board[row][col] = 'Q';
          solve(col + 1, board, ans, n);
          board[row][col] = '.';
        }
      }
    }

  public:
    vector<vector<string>>solveNQueens(int n) 
	{
      vector < vector < string >> ans;
      vector < string > board(n);
      string s(n, '.');
      for (int i = 0; i < n; i++) 
	  {
        board[i] = s;
      }
      solve(0, board, ans, n);
      return ans;
    }
};
int main() 
{
  int n = 8; // we are taking 8*8 grid and 8 queens
  Solution obj;
  vector < vector < string >> ans = obj.solveNQueens(n);
  //cout<<ans.size()<<endl; // It Prints 92
  for (int i = 0; i < ans.size(); i++) 
  {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) 
	{
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
