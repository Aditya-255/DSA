#include<bits/stdc++.h>
using namespace std;
vector<int> sliding(int arr[],int k,int n){
	vector<int> ans;
	for(int i=0;i<=n-k;i++){
		int maxi=arr[i];
		for(int j=i;j<=i+k-1;j++){
			maxi=max(maxi,arr[j]);
		}
		ans.push_back(maxi);
	}
	return ans;
}
int main(){
	int n=9;
	int arr[n]={1,3,-1,-3,5,3,2,1,6};
	int k=3;
	vector<int> ans=sliding(arr,k,n);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
