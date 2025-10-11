#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[3]={1,2,3};
	int n=3;
	int subset=1<<n;
	vector<vector<int> > ans;
	for(int num=0;num<subset;num++){
		vector<int> list;
		for(int i=0;i<n;i++){
			if(num&(1<<i)){
				list.push_back(arr[i]);
			}
		}
		ans.push_back(list);
	}
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
