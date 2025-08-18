#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={1,0,-1,-2,2,0};
	int target=0;
	set<vector<int> > st;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			set<int> hashset;
			for(int k=j+1;k<n;k++){
				int forth=target-(arr[i]+arr[j]+arr[k]);
				if(hashset.find(forth)!=hashset.end()){
					vector<int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					temp.push_back(forth);
					sort(temp.begin(),temp.end());
					st.insert(temp);
				}
				hashset.insert(arr[k]);
			}
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
