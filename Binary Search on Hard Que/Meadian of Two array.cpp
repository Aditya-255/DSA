#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int m=4;
	int arr1[n]={1,3,4,7,10,13};
	int arr2[m]={2,3,6,15};
	vector<int> ans;
	int i=0,j=0;
	while(i<n && j<m){
		if(arr1[i]<=arr2[j]){
			ans.push_back(arr1[i]);
			i++;
		}
		else{
			ans.push_back(arr2[j]);
			j++;
		}
	}
	while(i<n){
		ans.push_back(arr1[i]);
		i++;
	}
	while(j<m){
		ans.push_back(arr2[j]);
		j++;
	}
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
