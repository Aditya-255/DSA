#include<bits/stdc++.h>
using namespace std;
int BS(vector<int>& nums, int target,int low,int high){
	if(low>high){
		return -1;
	}
	int mid=(low+high)/2;
	if(nums[mid]==target){
		return mid;
	}
	else if(nums[mid]<target){
		BS(nums,target,mid+1,high);
	}
	else{
		BS(nums,target,low,mid-1);
	}
}
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0,high=n-1;
    return BS(nums,target,low,high);
}
int main(){
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(6);
	arr.push_back(7);
	arr.push_back(10);
	arr.push_back(21);
	int ans=search(arr,6);
	cout<<ans<<endl;
}
