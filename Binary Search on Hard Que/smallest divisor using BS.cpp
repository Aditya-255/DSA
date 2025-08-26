#include<bits/stdc++.h>
using namespace std;
int BSSmall(int arr[],int n,int th){
	int maxi=INT_MIN;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
	}
	int low=1,high=maxi;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		int sum=0;
		for(int i=0;i<n;i++){
			sum+=(arr[i]+mid-1)/mid;
		}
		if(sum<=th){
			ans=mid; 
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
	int n=4;
	int arr[n]={1,2,5,9};
	int th=7;
	int ans=BSSmall(arr,n,th);
	cout<<ans<<endl;
}
