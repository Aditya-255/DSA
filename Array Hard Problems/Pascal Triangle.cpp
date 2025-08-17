#include<bits/stdc++.h>
using namespace std;
vector<int> generateRow(int row){
	int ans=1;
	vector<int> ansrow;
	ansrow.push_back(ans);
	for(int col=1;col<row;col++){
		ans=ans*(row-col);
		ans=ans/col;
		ansrow.push_back(ans);
	}
	return ansrow;
}
int main(){
	vector<vector<int> > ans;
	int n=6;
	for(int i=1;i<=n;i++){
		ans.push_back(generateRow(i));
	}
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
