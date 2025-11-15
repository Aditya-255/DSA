#include<bits/stdc++.h>
using namespace std;
vector<int> sliding(int arr[],int k,int n){
	vector<int> ans;
	deque<int> dq;
	for(int i=0;i<n;i++){
		if(!dq.empty() && dq.front()<=i-k){
			dq.pop_front();
		}
		while(!dq.empty() && arr[dq.back()]<=arr[i]){
			dq.pop_back();
		}
		dq.push_back(i);
		if(i>=k-1){
			ans.push_back(arr[dq.front()]);
		}
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
