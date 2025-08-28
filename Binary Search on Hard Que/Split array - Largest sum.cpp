#include<bits/stdc++.h>
using namespace std;
bool Possible(int arr[],int n,int k,int ind){
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
int minsum(int arr[],int n,int k){
	int low=arr[n-1];
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	int high=sum;
	for(int i=low;i<=high;i++){
		if(Possible(arr,n,k,i)){
			return i;
		}
	}
	return -1;
}
int main(){
	int n=5;
	int arr[n]={10,20,30,40,50};
	int k=3;
	int ans=minsum(arr,n,k);
	cout<<ans<<endl;
}
