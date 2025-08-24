#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=7;
	int arr[n]={4,5,6,6,1,2,3};
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
		if(arr[low]==arr[mid]){
			index=low;
			low--;
		}
		else if(arr[mid]==arr[high]){
			index=mid;
			high--;
		}
		else if(arr[low]<=arr[mid]){
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
