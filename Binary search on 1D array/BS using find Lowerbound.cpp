#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=6;
	int arr[n]={3,7,8,9,11,25};
	int low=0;
	int high=n-1;
	int ans=n;
	int x=10;
	while(low<=high){
		int mid=low+((high-low)/2);
		if(arr[mid]>=x){
			ans=min(ans,mid);
			high=mid-1;
		}
		else if(arr[mid]<x){
			low=mid+1;
		} 
	}
	cout<<ans<<endl;
}
