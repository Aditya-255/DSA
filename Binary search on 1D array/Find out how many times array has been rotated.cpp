#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={3,4,5,1,2};
	int ans=INT_MAX;
	int index=-1;
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[low]<=arr[high]){
			if(arr[low]<ans){
				index=low;
				ans=arr[low];
			}
			break;
		}
		if(arr[low]<=arr[mid]){
			if(arr[low]<ans){
				index=low;
				ans=arr[low];
			}
			low=mid+1;
		}
		else{
			if(arr[mid]<ans){
				index=mid;
				ans=arr[mid];
			}
			high=mid-1;
		}
	}
	cout<<index<<endl;
}
