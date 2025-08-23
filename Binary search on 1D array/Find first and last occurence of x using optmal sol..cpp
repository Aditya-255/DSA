#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int>& nums,int n,int x){
	int low=0;int high= n-1;
	int ans=n; 
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int upperbound(vector<int>& nums,int n,int x){
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]>x){
			ans=mid;
			high=mid-1;;
		}
		low=mid+1;
	}
	return ans;
}
int main(){
	int n=8;
	vector<int> nums;
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(6);
	nums.push_back(8);
	nums.push_back(8);
	nums.push_back(8);
	nums.push_back(9);
	nums.push_back(10);
	int x=8;
	vector<int> ans;
	ans.push_back(-1);
	ans.push_back(-1);
	int lb=lowerbound(nums,n,x);
	int ub=upperbound(nums,n,x);
	if(lb==n || nums[lb]!=x){
		for(int i=0;i<n;i++){
			ans[i]=-1;
		}
	}
	ans[0]=lb;
	ans[1]=ub-1;
	cout<<lb<<" "<<ub-1<<endl;
}
