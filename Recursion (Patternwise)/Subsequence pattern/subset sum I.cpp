#include<bits/stdc++.h>
using namespace std;
void solve(int ind,int sum,int arr[],int n,vector<int> &sumsub){
	if(ind==n){
		sumsub.push_back(sum);
		return ;
	}
	solve(ind+1,sum+arr[ind],arr,n,sumsub);
	
	solve(ind+1,sum,arr,n,sumsub);
	
	return;
}
vector<int> subsetsum(int arr[],int n){
	vector<int> sum;
	solve(0,0,arr,n,sum);
	sort(sum.begin(),sum.end());
	return sum;
}
int main(){
	int arr[]={3,1,2};
	int n=3;
	int sum=0;
	vector<int> ans=subsetsum(arr,n);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
