#include<bits/stdc++.h>
using namespace std;
bool Search10(int nums[],int n,int target){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]==target){
			return true;
		}
		if(nums[low]==nums[mid] && nums[mid]==nums[high]){
			low=low+1;
			high=high-1;
			continue;
		}
		if(nums[low]<=nums[mid]){
			if(nums[low]<=target&&target<=nums[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		else{
			if(nums[mid]<=target&&target<=nums[high]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
	}
	return false;
}
int main(){
	int n=10;
	int nums[n]={7,8,1,2,3,3,3,4,5,6};
	int target=3;
//	int n=nums.size();
	if(Search10(nums,n,target)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
}
