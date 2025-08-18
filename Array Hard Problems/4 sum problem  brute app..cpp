#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={1,0,-1,0,-2,2};
	set<vector<int> > st;
	int target=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				for(int l=k+1;l<n;l++){
					int sum=arr[i]+arr[j]+arr[k]+arr[l];
					if(sum==target){
						vector<int> temp;
						temp.push_back(arr[i]);
						temp.push_back(arr[j]);
						temp.push_back(arr[k]);
						temp.push_back(arr[l]);
						sort(temp.begin(),temp.end());
						st.insert(temp);
					}
				}
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
