#include<bits/stdc++.h>
using namespace std;
void solve(int ind,int nums[],vector<int> &ds,vector<vector<int> > &ans){
	int n=6;
	ans.push_back(ds);
	for(int i=ind;i<n;i++){
		if(i!=ind && nums[i]==nums[i-1]){
			continue;
		}
		ds.push_back(nums[i]);
		solve(i+1,nums,ds,ans);
		ds.pop_back();
	}
}
vector<vector<int> > find(int arr[]){
	vector<vector<int> > ans;
	vector<int> ds;
	solve(0,arr,ds,ans);
	return ans;
}
int main(){
	int arr[]={1,2,2,2,3,3};
	int n=6;
	vector<vector<int> > ans= find(arr);
	 for (int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]\n";
}
}
