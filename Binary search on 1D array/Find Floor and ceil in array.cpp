#include<bits/stdc++.h>
using namespace std;
int Ceil(int arr[],int n,int x){
	int ans=-1;
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=arr[mid];
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int Floor(int arr[],int n,int x){
	int ans=-1;
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]<=x){
			ans=arr[mid];
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;
}
int main(){
	int n=5;
	int arr[n]={10,20,30,40,50};
	int x=25;
	int floor=Floor(arr,n,x);
	int ceil=Ceil(arr,n,x);
	cout<<floor<<" "<<ceil<<endl;
}
