#include<bits/stdc++.h>
using namespace std;
bool fill(int row,int col,vector<string> &board,int n){
	int duprow=row;
	int dupcol=col;
	while(row>=0 && col>=0){
		if(board[row][col]=='Q'){
			return false;
		}
		row--;
		col--;
	}
	col=dupcol;
	row=duprow;
	while(col>=0){
		if(board[row][col]=='Q'){
			return false;
		}
		col--;
	}
	row=duprow;
	col=dupcol;
	while(row<n && col>=0){
		if(board[row][col]=='Q'){
			return false;
		}
		row++;
		col--;
	}
	return true;
}
void solve(int col,vector<string> &board,vector<vector<string> > &ans,int n){
	if(col==n){
		ans.push_back(board);
		return ;
	}
	for(int row=0;row<n;row++){
		if(fill(row,col,board,n)){
			board[row][col]='Q';
			solve(col+1,board,ans,n);
			board[row][col]='.';
		}
	}
}
vector<vector<string> > solveQueen(int n){
	vector<vector<string> > ans;
	vector<string> board(n);
	string s(n,'.');
	for(int i=0;i<n;i++){
		board[i]=s;
	}
	solve(0,board,ans,n);
	return ans;
}
int main(){
	int n=4;

    vector<vector<string> > solutions = solveQueen(n);

    cout << "Total solutions: " << solutions.size() << "\n\n";

    for(int i=0; i<solutions.size(); i++){
        cout << "Solution " << i+1 << ":\n";
        for(int j=0;j<solutions[i].size();j++){
        	cout<<solutions[i][j]<<"\n";
		}
        cout << "\n";
    }
}
