#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5;
	int arr[n]={2,5,7,9,10};
	int target=5;
	int low=0,high=n-1;
	int ans=-1;
	int mid;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==target){
			ans=mid;
			break;
		}
		else if(arr[mid]<target){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}
