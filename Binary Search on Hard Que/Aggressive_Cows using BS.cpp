#include<bits/stdc++.h>
using namespace std;
bool canweplace(int arr[],int mid,int cows){
	int cntcow=1,last=arr[0];
	int n=6;
	for(int i=1;i<n;i++){
		if(arr[i]-last>=mid){
			cntcow++;
			last=arr[i];
		}
	}
	if(cntcow>=cows){
		return true;
	}
	return false;
}
int main(){
	int n=6;
	int arr[n]={0,3,4,7,10,9};
	int cows=4;
	sort(arr,arr+n);
	int maxi=INT_MIN;
	int mini=INT_MAX;
	int low=0,high=arr[n-1]-arr[0];
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(canweplace(arr,mid,cows)){
			ans=mid;
			low=mid+1;
		}
		else{ 
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}
