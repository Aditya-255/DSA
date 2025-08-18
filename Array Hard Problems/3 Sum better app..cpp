#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={-1,0,1,2,-1,-4};
	set<vector<int> > st;
	for(int i=0;i<n;i++){
		set<int> hashset;
		for(int j=i+1;j<n;j++){
			int third=-(arr[i]+arr[j]);
			if(hashset.find(third)!=hashset.end()){
				vector<int> temp;
				temp.push_back(arr[i]);
				temp.push_back(arr[j]);
				temp.push_back(third);
				sort(temp.begin(),temp.end());
				st.insert(temp);
			}
			hashset.insert(arr[j]);
		}
	}
	vector<vector<int> > ans(st.begin(),st.end());
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
