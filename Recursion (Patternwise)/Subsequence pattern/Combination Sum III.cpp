#include<bits/stdc++.h>
using namespace std;
void find(int ind,int k,int n,vector<int> &path,vector<vector<int> > &ans){
	if(n==0 && path.size()==k){
		ans.push_back(path);
		return ;
	}
	if(n<0 || path.size()>k){
		return ;
	}
	for(int i=ind;i<9;i++){
		path.push_back(i);
		find(i+1,k,n-i,path,ans);
		path.pop_back();
	}
}
vector<vector<int> > solve(int k,int n){
	vector<int> path;
	vector<vector<int> > ans;
	find(1,k,n,path,ans);
	return ans;
} 
int main(){
	int k=3;
	int n=7;
	vector<vector<int> > ans=solve(k,n);
	for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]\n";
    }
}
