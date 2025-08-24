#include<bits/stdc++.h>
using namespace std;
int Single(int nums[],int n){
	if(n==1){
		return nums[0];
	}
	if(nums[0]!=nums[1]){
		return nums[0];
	}
	if(nums[n-1]!=nums[n-2]){
		return nums[n-1];
	}
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
			return nums[mid];
		}
		if((mid%2==1 && nums[mid]==nums[mid-1]) ||
			(mid%2==0 && nums[mid]==nums[mid+1])){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main(){
	int n=9;
	int nums[n]={1,1,2,2,3,3,4,5,5};
	int ans=Single(nums,n);
	cout<<ans<<endl;
}
