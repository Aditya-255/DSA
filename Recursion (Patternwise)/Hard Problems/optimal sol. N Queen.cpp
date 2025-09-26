#include<bits/stdc++.h>
using namespace std;
void solve(int col,vector<string> &board,vector<vector<string> > &ans
,vector<int> &leftrow,vector<int> &ud,vector<int> &ld
		,int n){
	if(col==n){
		ans.push_back(board);
		return ;
	}
	for(int row=0;row<n;row++){
		if(leftrow[row]==0 && ld[row+col]==0 
		&& ud[n-1+col-row]==0){
			board[row][col]='Q';
			leftrow[row]=1;
			ld[row+col]=1;
			ud[n-1+col-row]=1;
			solve(col+1,board,ans,leftrow,ud,ld,n);
			board[row][col]='.';
			leftrow[row]=0;
			ld[row+col]=0;
			ud[n-1+col-row]=0;
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
	vector<int> leftrow(n,0);
	vector<int> ud(2*n-1,0);
	vector<int> ld(2*n-1,0);
	solve(0,board,ans,leftrow,ud,ld,n);
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
