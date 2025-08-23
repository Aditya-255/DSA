#include<bits/stdc++.h>
using namespace std ;
int Search(int nums[],int n,int target){
	int low=0,high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[mid]==target){
			ans=mid;
		}
		if(nums[low]<=nums[mid]){
			if(nums[low]<=target && target<=nums[mid]){
				high=mid-1;
			}
			else{
				low=mid+1;
			}
		}
		else{
			if(nums[mid]<=target && target<=nums[high]){
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
	}
	return ans;
}
int main(){
	int n=9;
	int nums[n]={7,8,9,1,2,3,4,5,6};
	int x=1;
	int ans=Search(nums,n,x);
	cout<<ans<<endl;
}
