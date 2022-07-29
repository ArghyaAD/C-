#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
bool check(vector<string>&board,int r,int c){
   for(int i=r-1;i>=0;i--){
      if(board[i][c]=='Q')return false;
   }
   int i=r-1,j=c-1;
   while(i>=0 && j>=0){
      if(board[i--][j--]=='Q')return false;
   }
   i=r-1,j=c+1;
   while(i>=0 && j<=board.size()){
      if(board[i--][j++]=='Q')return false;
   }
   return true;
}
void solve(vector<string>&board,int n,int i){
   if(i==n){
      ans.push_back(board);
      return;
   }
   for(int j=0;j<n;j++){
      if(check(board,i,j)){
            board[i][j]='Q';
            solve(board,n,i+1);
            board[i][j]='.';
      }
   }
}
void solveNQueens(int n) {
   vector<string>board;
   string dot="";
   for(int i=0;i<n;i++){
      dot+='.';
   }
   for(int i=0;i<n;i++){
      board.push_back(dot);
   }
   solve(board,n,0);
}
int main()
{
   int n;
   cin>>n;
   solveNQueens(n);
   for(auto it:ans){
      for(auto ele:it){
         cout<<ele<<" " <<endl;
      }
      cout<<endl;
      cout<<endl;
   }
}
