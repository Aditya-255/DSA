#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=8;
	int arr[n]={4,5,6,6,1,2,3,3};
	int ans=INT_MAX;
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[high]){
			ans=min(ans,arr[low]);
			break;
		}
		if(arr[low]==arr[mid]){
			ans=min(ans,arr[low]);
			low++;
		}
		else if(arr[mid]==arr[high]){
			ans=min(ans,arr[mid]);
			high--;
		}
		else if(arr[low]<=arr[mid]){
			ans=min(ans,arr[low]);
			low=mid+1;
		}
		else{
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}
