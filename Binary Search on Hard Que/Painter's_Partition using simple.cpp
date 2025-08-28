#include<bits/stdc++.h>
using namespace std;
bool possible(int arr[],int n,int k,int ind){
	int pai=1;
	int time=0;
	for(int i=0;i<n;i++){
		if(arr[i]+time<=ind){
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
int MinEl(int arr[],int n,int k){
	int maxi=arr[n-1];
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	for(int i=maxi;i<=sum;i++){
		if(possible(arr,n,k,i)){
			return i;
		}
	}
	return -1;
}
int main(){
	int n=4;
	int arr[n]={10,20,40,50};
	int k=2;
	int ans=MinEl(arr,n,k);
	cout<<ans<<endl;
}
