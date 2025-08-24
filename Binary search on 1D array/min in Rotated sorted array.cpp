#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int nums[n]={4,5,1,2,3};
	int ans=INT_MAX;
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(nums[low]<=nums[mid]){
			ans=min(ans,nums[low]);
			low=mid+1;
		}
		else{
			ans=min(ans,nums[mid]);
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}
