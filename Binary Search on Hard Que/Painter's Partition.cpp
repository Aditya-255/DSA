#include<bits/stdc++.h>
using namespace std;
bool minele(int arr[],int n,int k,int mid){
	int pai=1;
	int time=0;
	for(int i=0;i<n;i++){
		if(arr[i]>mid){
			return false;
		}
		if(time+arr[i]<=mid){
			time+=arr[i];
		}
		else{
			pai++;
			time=arr[i];
		}
	}
	if(pai==k){
		return true;
	}
	return false;
}
int Painter(int arr[],int n,int k){
	int maxi=INT_MIN;
	int sum=0;
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
		sum+=arr[i];
	}
	int low=maxi;
	int high=sum;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(minele(arr,n,k,mid)){
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
	int arr[n]={10,20,30,40};
	int k=2;
	int ans=Painter(arr,n,k);
	cout<<ans<<endl;
}
