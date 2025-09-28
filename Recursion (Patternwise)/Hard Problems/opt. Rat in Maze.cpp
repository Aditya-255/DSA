#include<bits/stdc++.h>
using namespace std;
void solve(int i,int j,vector<vector<int> > &m,int n,
vector<string> &ans,string move,vector<vector<int> > &vis,int di[],int dj[]){
	if(i==n-1 && j==n-1){
		ans.push_back(move);
		return ;
	}
	string dir="DLRU";
	for(int ind=0;ind<4;ind++){
		int nexti=i+di[ind];
		int nextj=j+dj[ind];
		if(nexti>=0 && nextj>=0 && nexti<n && nextj<n
		& !vis[nexti][nextj] && m[nexti][nextj]==1){
			vis[i][j]=1;
			solve(nexti,nextj,m,n,ans,move+dir[ind],vis,di,dj);
			vis[i][j]=0;
		}
	}
}
vector<string> Path(vector<vector<int> > &m,int n){
	vector<string> ans;
	vector<vector<int> > vis(n,vector<int> (n,0));
	int di[]={1,0,0,-1};
	int dj[]={0,-1,1,0};
	if(m[0][0]==1){
		solve(0,0,m,n,ans,"",vis,di,dj);
	} 
	return ans;
}
int main(){
	vector<vector<int> > m;
	 vector<int> row1; 
    row1.push_back(1); row1.push_back(0); row1.push_back(0); row1.push_back(0);
    m.push_back(row1);

    vector<int> row2; 
    row2.push_back(1); row2.push_back(1); row2.push_back(0); row2.push_back(1);
    m.push_back(row2);

    vector<int> row3; 
    row3.push_back(1); row3.push_back(1); row3.push_back(0); row3.push_back(0);
    m.push_back(row3);

    vector<int> row4; 
    row4.push_back(0); row4.push_back(1); row4.push_back(1); row4.push_back(1);
    m.push_back(row4);
    int n=m.size();
    vector<string> res = Path(m, n);
	 if (res.empty()) {
        cout << "No path found\n";
    } else {
        cout << "All possible paths:\n";
        for(int i=0;i<res.size();i++){
        	cout<<res[i]<<" ";
		}
    }
}
